class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      ListNode dummy(0);
      dummy.next = head;

      ListNode* cur=head;
      int cnt=0;

      while(cur != nullptr){
         cnt++;
         cur = cur->next;
      }

      ListNode* prev = &dummy;
      for(int i=0;i<cnt-n;i++){
        prev=prev->next;
      }
      prev->next=prev->next->next;
       return dummy.next;

    }
};
