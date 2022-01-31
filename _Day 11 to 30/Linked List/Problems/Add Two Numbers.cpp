class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    
        ListNode* dummy = new ListNode(0);
        ListNode* tail = dummy;
        int carry = 0;
        
        ListNode* ptr1 = l1;
        ListNode* ptr2 = l2;
        
        while(ptr1 && ptr2)
        {
            int sum = (ptr1->val + ptr2->val + carry);
            carry = sum/10;
            tail->next = new ListNode(sum%10);
            
            tail = tail->next;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        
        while(ptr1)
        {
            int sum = ptr1->val + carry;
            carry = sum/10;
            tail->next = new ListNode(sum%10);
            
            tail = tail->next;
            ptr1 = ptr1->next;
        }
        
        while(ptr2)
        {
            int sum = ptr2->val + carry;
            carry = sum/10;
            tail->next = new ListNode(sum%10);
            
            tail = tail->next;
            ptr2 = ptr2->next;
        }
        
        if(carry)
            tail->next = new ListNode(carry);
        return dummy->next;
    }
};