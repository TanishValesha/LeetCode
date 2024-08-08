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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        int value = 0;
        ListNode* temp = head;
        while (temp != nullptr) {
                ListNode* front = temp->next;
                value = 0;
                while (front != NULL) {
                    if (front->val > temp->val) {
                        value = front->val;
                        break;
                    }
                    front = front->next;
                }
                ans.push_back(value);
                temp = temp->next;
        }
        //
        return ans;
    }
};