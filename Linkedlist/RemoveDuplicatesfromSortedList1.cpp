// Remove Duplicates from Sorted List
// take dummyNode and take one pointer which is pointing to that dummyNode and itrate through
//list where dummyNode's data is not equal to list then points temp to that node then move
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyNode = new ListNode(-200);
        ListNode* temp=dummyNode;
        ListNode* t1 = head;
        while(t1!=nullptr){
            if(temp->val!=t1->val){
                temp->next = t1;
                t1=t1->next;
                temp=temp->next;
            }
            else{
                t1=t1->next;
            }
            temp->next=nullptr;
        }
        return dummyNode->next;
    }
};