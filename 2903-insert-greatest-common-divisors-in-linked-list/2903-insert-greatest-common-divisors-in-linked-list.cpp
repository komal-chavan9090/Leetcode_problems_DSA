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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr=head;
        ListNode* n1=head->next;

        while(n1!=NULL)
        {
            int temp=std::gcd(curr->val,n1->val);
            ListNode* new1=new ListNode(temp);

            curr->next=new1;
            new1->next=n1;
            curr=n1;
            n1=n1->next;
        }
        return head;
    }
};