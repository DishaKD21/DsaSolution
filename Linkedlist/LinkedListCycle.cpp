//Linked List Cycle
//take two pointer one as fast and one as slow slow moves once where fast moves twice and then 
//where both value becomes same then return true otherwise false
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
    bool hasCycle(ListNode *head) {
        ListNode* slow= head;
        ListNode* fast= head;
        while(fast and fast->next){
            slow =slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }

        return false;
    }
};