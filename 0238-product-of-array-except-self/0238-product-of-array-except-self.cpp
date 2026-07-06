class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int s = nums.size();
        vector<int> ans(s,1);

        int pre=1;
        for (int i=0;i<s;i++) 
        {
            ans[i]=pre;
            pre=pre*nums[i];
        }

        int suff=1;
        for (int i=s-1;i>=0;i--) 
        {
            ans[i]=ans[i]*suff;
            suff=suff*nums[i];
        }
        return ans;
    }
};
