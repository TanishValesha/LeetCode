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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL){
            return (NULL);
        }
        int length = 1;
        vector <int> odds;
        vector <int> evens;
        ListNode *temp = head;
        while(temp != NULL){
            if(length % 2 != 0){
                odds.push_back(temp->val);
            } else {
                evens.push_back(temp->val);
            }
            length++;
            temp = temp->next;
        }
        ListNode *head2 = new ListNode(odds[0]);
        ListNode *mover = head2;
        for(int i = 1; i < odds.size(); i++){
            ListNode* temp = new ListNode(odds[i]);
            mover->next = temp;
            mover = mover->next;
        }
        for(int i = 0; i < evens.size(); i++){
            ListNode *temp = new ListNode(evens[i]);
            mover->next= temp;
            mover = mover->next;
        }
        return (head2);
    }
};