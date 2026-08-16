class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = *max_element(candies.begin(), candies.end());
        int i=0;
        vector<bool> result;
        while(i<candies.size())
        {
            int c=candies[i]+extraCandies;
            if(c>=max)
                result.push_back(true);
            else
                result.push_back(false);
            i++;
        }
        return result;
    }
};