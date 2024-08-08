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
        ListNode* temp_begin = head;
        while(temp_begin->next != NULL){
            if(count == k){
                break;
            }
            count++;
            temp_begin = temp_begin->next;
        }
        ListNode* temp_end = head;
        int real_c = length - k + 1;
        while(real_c != 1){
            temp_end = temp_end->next;
            real_c--;
        }
        int temp_int = temp_end->val;
        temp_end->val = temp_begin->val;
        temp_begin->val = temp_int;

        return head;
    }
};