/*
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
        
        Node* reverse(Node* curr, Node* prev) {
            if (curr == NULL) {
                return prev;
            }

            Node* front = curr->next;
            curr->next = prev;

            return reverse(front, curr);
        }

        Node* addTwoLists(Node* head1, Node* head2) {

            head1 = reverse(head1, NULL);
            head2 = reverse(head2, NULL);

            Node* curr1 = head1;
            Node* curr2 = head2;

            Node* head = new Node(0);
            Node* tail = head;

            int carry = 0;

            while (curr1 && curr2) {
                int sum = curr1->data + curr2->data + carry;

                tail->next = new Node(sum % 10);
                tail = tail->next;

                carry = sum / 10;

                curr1 = curr1->next;
                curr2 = curr2->next;
            }

            while (curr1) {
                int sum = curr1->data + carry;

                tail->next = new Node(sum % 10);
                tail = tail->next;

                carry = sum / 10;
                curr1 = curr1->next;
            }

            while (curr2) {
                int sum = curr2->data + carry;

                tail->next = new Node(sum % 10);
                tail = tail->next;

                carry = sum / 10;
                curr2 = curr2->next;
            }

            if (carry) {
                tail->next = new Node(carry);
            }

            Node* ans = reverse(head->next, NULL);

            while (ans != NULL && ans->data == 0 && ans->next != NULL) {
                ans = ans->next;
            }

            return ans;
        }
};