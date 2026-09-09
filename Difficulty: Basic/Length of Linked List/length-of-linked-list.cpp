/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        // Code here
        vector<int>ans;
        int count = 0;
        Node* temp = head;
        while(temp){
            ans.push_back(temp->data);
            temp = temp -> next;
            count++;
        }
        return count;
    }
};