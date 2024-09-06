//Remove Nth Node From End of List
//take the dummy node and then take two pointers to pointing towards the dummy node and then 
//move the fast pointer and reach to the n location which is given and then after it reaches 
//to n location take the slow and fast both together and then move them untill the fast 
//recheas at the null and then remove the element at this time slow will reach at the one 
//element before the location so we can easily remove the node from the list
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
        ListNode* dummyNode= new ListNode(-1);
        dummyNode->next=head;
        ListNode* fast=dummyNode;
        ListNode* slow=dummyNode;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        while(fast->next!=nullptr){
           fast=fast->next;
           slow=slow->next;
        }
        slow->next=slow->next->next;
        return dummyNode->next;
    }
};