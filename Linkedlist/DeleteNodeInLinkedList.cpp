//Delete Node in a Linked List
//simply swap the data or the note you want to delete and then delete the next node which is 
//having the data of the previous note after swapping
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
    void deleteNode(ListNode* node) {
        node->val=node->next->val;
        node->next =node->next->next;    }
};