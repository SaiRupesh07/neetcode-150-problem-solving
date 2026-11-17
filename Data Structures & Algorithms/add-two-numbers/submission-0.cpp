class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
      ListNode dummynode(0);
      ListNode* currentNode =& dummynode;
      int carrynode = 0;

      while(l1 != nullptr || l2 != nullptr || carrynode != 0){
        int sum = carrynode;
        if(l1 != nullptr){
            sum += l1->val;
            l1=l1->next;
        }
        if(l2 != nullptr){
            sum += l2->val;
            l2 = l2->next;
        }
        carrynode = sum/10;
        currentNode->next = new ListNode(sum %10);
        currentNode = currentNode->next;

      }  
      return dummynode.next;
    }
};
