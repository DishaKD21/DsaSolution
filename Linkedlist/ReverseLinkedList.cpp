//Reverse Linked List
//take three pointers define as prev which is pointing towards the head current pointing 
//towards the head->next and next pointing to currents next then move three of them 
//together and then try to change the direction of the arrow 
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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr or head->next==nullptr){
            return head;
        }
         ListNode* prev=head;
        ListNode* current=head->next;
        while(current!=nullptr){
            ListNode* nodenext=current->next;
            current->next= prev;
            prev = current;  
            current = nodenext;  
        }
        head->next=nullptr;
        head=prev;
        return head;
    }
};