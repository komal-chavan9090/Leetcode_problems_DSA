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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {

        vector<vector<int>> matrix(m, vector<int>(n,-1));

        int toprow=0,bottomrow=m-1,leftcol=0,rightcol=n-1;

        while(head)
        {
            for(int col=leftcol;col<=rightcol && head;col++)
            {
                  matrix[toprow][col]=head->val;
                  head=head->next;
            }
            toprow++;

            for(int row=toprow;row<=bottomrow && head;row++)
            {
                matrix[row][rightcol]=head->val;
                head=head->next;
            }

            rightcol--;

            for(int col=rightcol;col>=leftcol && head;col--)
            {
                matrix[bottomrow][col]=head->val;
                head=head->next;
            }

            bottomrow--;

            for(int row=bottomrow;row>=toprow && head;row--)
            {
                matrix[row][leftcol]=head->val;
                head=head->next;
            }
            leftcol++;
        }

        return matrix;


    }
};