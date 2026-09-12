/* Structure for Link list node
class Node {
  public:
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* deleteK(Node* head, int K) {
        // code here
        int count = 1;
        Node* curr = head;
        Node* prev = NULL;
        
        if(K==1){
            return NULL;
        }
        while(curr){
            if(count==K){
                prev->next = curr->next;
                delete curr;
                curr = prev->next;
                count = 1;
            }
            else{
                prev = curr;
                curr = curr->next;
                count++;
            }
        }
        return head;
    }
};