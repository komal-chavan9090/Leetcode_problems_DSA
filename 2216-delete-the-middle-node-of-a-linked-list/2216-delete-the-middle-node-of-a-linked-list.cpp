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
    ListNode* deleteMiddle(ListNode* head) {

         if(head==NULL||head->next==NULL){
        head=NULL;
         return head;
        }
        
        ListNode* prev=NULL;
        ListNode* slow=head;
        ListNode* fast=head;

        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next;
            if(fast->next!=NULL)
            {
                 fast=fast->next;
            }
            prev=slow;
            slow=slow->next;
        }

        prev->next=slow->next;
        return head;
    }
};