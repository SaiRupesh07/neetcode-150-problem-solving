class Solution {
public:
    void reorderList(ListNode* head) {
      

       ListNode* slow=head;
       ListNode* fast=head;
       while(fast != nullptr && fast->next != nullptr){
          slow = slow->next;
          fast = fast->next->next;
       } 

       ListNode* cur = slow->next;
       slow->next = nullptr;
       ListNode* prev = nullptr;
       while(cur != nullptr){
        ListNode* next = cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
       }

       ListNode* first=head;
       ListNode* second=prev;
       while(second != nullptr){
        ListNode* temp1 = first->next;
        ListNode* temp2 = second->next;

        first->next=second;
        second->next=temp1;

        first = temp1;
        second = temp2;
       }
    }
};
