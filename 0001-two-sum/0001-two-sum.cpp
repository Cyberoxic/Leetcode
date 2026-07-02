class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           int a=nums[i];
           int n=target-a; 
           if(mpp.find(n)!=mpp.end())
           {
                return {mpp[n],i};
           }
           else mpp[a]=i;
        }
        return{-1,-1};
    }
};