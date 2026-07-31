class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int closest_sum=nums[0]+nums[1]+nums[2];
        for(int i=0;i<n-2;i++) {
            if(i>0&&nums[i]==nums[i-1]) {
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k) 
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(sum==target) 
                {
                    return sum;
                }
                if(abs(sum-target)<abs(closest_sum-target)) 
                {
                    closest_sum=sum;
                }
                if(sum<target) 
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return closest_sum;
    }
};
