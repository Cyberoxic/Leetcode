class Solution {
public:
    bool check(vector<int>& nums) {
        int s=nums.size();
        int cnt=0;
        /*for(int i=0;i<s-1;i++)
        {
            if(nums[i]>nums[i+1])
                cnt++;
        }*/ 
        for(int i=0;i<s;i++)
        {
            if(nums[i]>nums[(i+1)%s])
            cnt++;
        }
        return cnt<=1;
    }
};