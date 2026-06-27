class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        unordered_map<int,int> mpp;
        vector<int> ans;
        int n = nums.size();
        if(n<=1) 
        {
            return nums;
        }
        for (int i = 0; i < n; i++) 
        {
            int num = nums[i];
            mpp[num]++;
        }
        for(int i=0;i<n;i++)
        {
            int a=nums[i];
            int m=a+1;
            int n=a-1;
            if(mpp[a]==1 && mpp.find(m) == mpp.end() && mpp.find(n) == mpp.end())
            {
                ans.push_back(a);
            }
        }
        return ans;
    }
};