//Odd Even Linked List
//for this take two pointers name odd and even and then iteratw through whole list and then 
//they one which is at even place joint it with even pointer and odd with odd pointer and then
// merge them at last
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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr or head->next==nullptr){
            return head;
        }
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* evenHead =even;
        while(even!=nullptr && even->next !=nullptr){
            odd->next =odd->next->next;
            even->next=even->next->next;
            odd = odd->next;
            even = even->next;
        }
        odd->next =evenHead;
        return head;
    }
};