/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                break;
            }
        }
        if(fast==NULL || fast->next==NULL){
            cout<<"no cycle";
            return NULL;
        }


        ListNode* p1 = slow;
        ListNode* p2 = head;
        
        while(p1!=p2){
            
            p1 = p1->next;
            p2 = p2->next;

        }
        cout<<"tail connects to node index ";
        return p1;
    }
};