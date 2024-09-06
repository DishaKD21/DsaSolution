//Middle of the Linked List
//take two pointer pointing towards head and then one of them moves two step and one of them 
//one step only itreate through whole loop the one which is going slow it will be at the center
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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;

        while (temp2 != nullptr && temp2->next != nullptr) {
            temp1 = temp1->next;
            temp2 = temp2->next->next;
        }

        return temp1;
    }
};

    