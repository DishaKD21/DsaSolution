// Delete the Middle Node of a Linked List
//take two pointers fast and slow pointing towards the head fast is moving two steps and 
//slow is one step and then fast->next when reaches to null then slow will reach at the 
//middle
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return nullptr;
        }
        ListNode* fast = head;
        ListNode* slow = head;
        fast = fast->next->next;
     
        while(fast and fast->next) {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* todelete = slow->next;
        slow->next = slow->next->next;
        delete todelete;  
        return head;
    }
};
