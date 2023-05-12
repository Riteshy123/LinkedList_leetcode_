class Solution {
public:
     ListNode* deleteMiddle(ListNode* head) 
     {
       
         
         ListNode* temp=head;
         int len=1;
         while(temp!=NULL&&temp->next!=NULL){
             temp=temp->next;
             len++;
         }
         if(len==1)
         return NULL;
            // cout<<len;
         int i=0;
         int position=(len/2);
         ListNode* prev=head;

         while(i<position-1)
         {
             prev=prev->next;
             i++;
         }
        
         ListNode* curr=prev->next;
          ListNode* a=curr->next;
          curr->next=NULL;
         prev->next=a;
         
         delete curr;
    return head;
    }
};