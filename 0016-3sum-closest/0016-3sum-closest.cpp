class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int new_sum=nums[0]+nums[1]+nums[2];
        for (int i=0;i<n-2;i++)
        {
            if(i>0 && nums[i]==nums[i-1])
                continue;
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum==target)
                    return sum;
                if(abs(sum-target)<abs(new_sum-target))
                {
                    new_sum=sum;
                }
                if(sum<target) l++;
                else r--;
            }
        }
        return new_sum;
    }
};
