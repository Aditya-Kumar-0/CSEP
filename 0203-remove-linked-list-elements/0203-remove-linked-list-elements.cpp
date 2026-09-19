/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        while(curr){
            if(curr->val == val){
                if(curr==head){
                    head = head->next;
                    delete curr;
                    curr = head;
                }

                else if(curr->next == NULL){
                    prev->next = NULL;
                    delete curr;
                    curr = NULL;
                }
                

                else{
                    prev->next = curr->next;
                    delete curr;
                    curr = prev->next;
                }
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};