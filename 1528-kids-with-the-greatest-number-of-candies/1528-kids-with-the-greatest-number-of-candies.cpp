class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracan) {
        double maxi=*max_element(candies.begin(),candies.end());
        cout<<maxi;
        vector<bool> answer;

        for(int i=0;i<candies.size();i++)
        {
            if((candies[i]+extracan)>=maxi)
            {
                   answer.push_back(true);
            }
            else if(candies[i]+extracan<maxi)
            {
                answer.push_back(false);
            }
        }
        return answer;
    }
};