/* Linked List Node Structure
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        Node* curr = head;
        unordered_map<Node*,bool>visited;
        while(curr){
            if(visited[curr] == 1){
                return 1;
                
            }
            visited[curr] = 1;
            curr = curr->next;
        }
        return 0;
    }
};