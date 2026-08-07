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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        int carry = 0;
        ListNode dummy(0);
        dummy.next = nullptr;
        ListNode* tail = &dummy;

        while(temp1 || temp2 || carry){
            int num1 = temp1? temp1->val : 0;
            int num2 = temp2? temp2->val : 0;
            
            int digit = num1+num2+carry;
            ListNode* node = new ListNode(digit%10);
            tail->next = node; 
            tail = tail->next;

            carry = digit/10;

            if(temp1) temp1 = temp1->next;
            if(temp2) temp2 = temp2->next;
        }
        return dummy.next;
    } 
    
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna