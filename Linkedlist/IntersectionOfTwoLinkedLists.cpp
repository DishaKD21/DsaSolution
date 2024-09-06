//Intersection Of Two LinkedLists
//take the two pointer run the loop till both pointer are not equal to eachother and  notnull
//increase the pointer when both are same then return one of them and if one of them are null 
//then return head
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* tempA=headA;
        ListNode* tempB=headB;
         if (tempA == nullptr || tempB == nullptr) return nullptr;
          while (tempA != nullptr && tempB != nullptr && tempA != tempB) {
          tempA = tempA->next;
          tempB = tempB->next;
          
         if(tempA==tempB){
          return tempA;
          }
         if (tempA == nullptr)  tempA= headA;
        if (tempB== nullptr) tempB = headB;
    }
        return tempA;
    }
};