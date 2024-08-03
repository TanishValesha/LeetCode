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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp = head;
        int length = 0;
        while(temp != NULL){
            length++;
            temp = temp->next;
        }
        temp = head;
        if(length == 1) return NULL;
        if(length == n) {
            head = temp->next;
            return (head); 
        }
        int real_n = length + 1 - n;
        int c = length - n;
        while(temp != NULL){
            c--;
            if(c == 0){
                break;
            }
            temp = temp ->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};