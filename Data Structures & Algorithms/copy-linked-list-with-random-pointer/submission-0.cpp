class Solution {
public:
    Node* copyRandomList(Node* head) {
      unordered_map<Node*,Node*>mp;
      Node* currentNode = head;

      while(currentNode != nullptr){
        mp[currentNode] = new Node(currentNode->val);
        currentNode = currentNode->next;
      } 

       currentNode = head;
       while( currentNode != nullptr){
         mp[ currentNode]->next = mp[ currentNode->next];
         mp[ currentNode]->random = mp[ currentNode->random];
          currentNode =  currentNode->next;
       } 
       return mp[head];
    }
};
