class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int size=nums.size();
        if(size>=4)
        {
            sort(nums.begin(),nums.end());
            int s=(nums[size-1]*nums[size-2])-(nums[0]*nums[1]);
            return s;
        }
        else 
            return -1;
    }
};