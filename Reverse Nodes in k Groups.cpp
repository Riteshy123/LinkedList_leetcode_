class Solution {
    
public:
 int getLength(ListNode* head) {
        int len = 0;
        ListNode* temp = head;
        while(temp != NULL) {
                temp = temp -> next; 
                len++;
        }
        return len;
}
 
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL) {
                cout << "LL is empty" << endl;
                return NULL;
        }
        int len = getLength(head);
        if(k > len) {
            
                return head;
        }
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forward = curr -> next;
        int count = 0;

        while(count < k) {
                forward = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = forward;
                count++;
        }       
        if(forward != NULL) {              
              ListNode* recursionKaAns = reverseKGroup(forward, k);
                head -> next = recursionKaAns;
        }
        return prev;
    }
};