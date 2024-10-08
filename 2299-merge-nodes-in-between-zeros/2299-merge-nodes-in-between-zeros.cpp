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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* dummy_head = new ListNode(0);
        ListNode* dummy =  dummy_head;
        ListNode* temp = head;
        int sum = 0;
        while(temp != NULL){
            if(temp->val == 0 && sum > 0){
                ListNode* newNode = new ListNode(sum);
                sum = 0;
                dummy->next = newNode;
                dummy = dummy->next;
            }
            sum += temp->val;
            temp = temp->next;
        }
        return dummy_head->next;
    }
};