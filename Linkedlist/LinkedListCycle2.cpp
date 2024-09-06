//Linked List Cycle 2
//first put condidtion for if it is cycle or not then put condition till slow is not equal to 
//fast increase pointer by 1 then return slow
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
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
               slow=head;
        while(slow!=fast){
            slow=slow->next;
            fast=fast->next;       
        }
         return slow;
            }
        }
    return nullptr;
    }
};