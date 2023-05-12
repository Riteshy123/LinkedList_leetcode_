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
 
    ListNode* removeNthFromEnd(ListNode* head, int n) {
       
        ListNode* temp=head;
        int len=1;
        while(temp!=NULL&&temp->next!=NULL){
            temp=temp->next;
            len++;
        }
      
        if(len==1 ) 
        return NULL;

        if(len==n)
        return head->next;
        
        
        
        ListNode* prev=head;
        int i =1;
        while(i < (len-n)){
            
                 prev=prev->next;
                 i++;
            }
        ListNode* curr=prev->next;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    return head;
    }
};