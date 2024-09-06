//Remove Linked List Elements
// iterate through list compare with the given element and if its same then remove it
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head==nullptr){
            return nullptr;
        }
        while(head!=nullptr and head->val==val){
            ListNode* temp1=head;
            head=head->next;
            delete temp1;
        }
        ListNode* temp=head;
        while((temp!=nullptr) and (temp->next!=nullptr))
         {
           if(temp->next->val==val){
            ListNode* temp2=temp->next;
            temp->next=temp->next->next;
            delete temp2;
           }
           else{
            temp=temp->next;
           }
        }
        return head;
    }
};