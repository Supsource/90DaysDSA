class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current=head;
        if(current==NULL){
            return NULL;
        }
        while(current->next!=NULL){
            if(current->val==current->next->val){
               ListNode* temp=current->next;
                current->next=temp->next;
                delete(temp);
            }else{
                current=current->next;
            }
        }
        return head;
    }
};
