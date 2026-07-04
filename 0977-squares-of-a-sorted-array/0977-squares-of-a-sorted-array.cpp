class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s=nums.size();
        vector<int> ans(s);
        int l=0,r=s-1,k=s-1;
        while(l<=r)
        {
            int l_square=nums[l]*nums[l];
            int r_square=nums[r]*nums[r];
            if(l_square>r_square)
            {
                ans[k]=l_square;
                l++;
            }
            else
            {
                ans[k]=r_square;
                r--;
            }
            k--;
        }
        return ans;
    }
};
