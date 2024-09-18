//Reverse Linked List Another approach 
//take three pointers prev,next set as null initially and current as head then move them and 
//try to change the direction of the arrow
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
      
        ListNode* prev=nullptr;
        ListNode* current=head;
        ListNode* next=nullptr;
        while(current!=nullptr){
            next=current->next;
            current->next = prev;
            prev = current; 
            current=next;   
        }
    
        return prev;
    }
};