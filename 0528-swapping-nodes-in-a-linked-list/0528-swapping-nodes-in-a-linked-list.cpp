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
    ListNode* swapNodes(ListNode* head, int k) {
        int count = 1;
        int length = 0;
        ListNode* temp = head;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        temp = head;
        int real_c = length - k + 1;
        ListNode* temp_begin = head;
        ListNode* temp_end = head;
        while(temp != NULL){
            if(count == k){
                temp_begin = temp;
            }
            if(count == real_c){
                temp_end = temp;
            }
            count++;
            temp = temp->next;
        }
        int temp_int = temp_end->val;
        temp_end->val = temp_begin->val;
        temp_begin->val = temp_int;

        return head;
    }
};