 //Merge Two Sorted List
 //take dummy Node and then compare two list's element then ponts the dummyNode's next to 
 //small element then move ahead 
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        ListNode* dummynode = new ListNode(-1);
        ListNode* temp = dummynode;
        while(head1!=nullptr and head2!=nullptr){
            if(head1->val < head2->val){
                temp->next = head1;
                head1=head1->next;
                temp=head1;
            }
             else
            {
                temp->next = head2;
                head2=head2->next;
                temp=head2;
            } 
        }
        if(head1 != NULL)
        {
            temp->next = head1;  
        }
        else
        {
            temp->next = head2;
        }
        return dummynode->next;
    }
};