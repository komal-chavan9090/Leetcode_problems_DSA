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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> vec(k,NULL);

        ListNode* temp=head;
        int n=0;

        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }

        int size=n/k;
        int extra = n%k;

        ListNode* curr=head;
         
         for(int i=0;i<k;i++)
         {
            vec[i]=curr;
            int curr_len=size+(i<extra?1:0);

            for(int j=1;j<curr_len;j++)
            {
                if(curr)
                {
                    curr=curr->next;
                }
            }
                if(curr)
                {
                    ListNode* next=curr->next;
                    curr->next=NULL;
                    curr=next;
                }
            

         }
         return vec;
    }
};