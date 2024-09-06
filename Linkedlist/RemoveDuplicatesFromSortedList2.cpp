//Remove the element which is having Duplicates 
//solved using dummynode
//dummynode with value -1 pointing to the distinct value and removing duplicates
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp=dummyNode;
        ListNode* t1=head;

        while (t1!=nullptr){
            if(t1->next!= nullptr and t1->next->val==t1->val){
              int Samelement=t1->val;
                while(t1 != nullptr and t1->val==Samelement){
                      t1=t1->next;
                }
            }
            else{
              temp->next=t1;
              temp=temp->next;
              t1= t1->next;
            }
        }
         temp->next = nullptr;

        return dummyNode->next;
    }
};