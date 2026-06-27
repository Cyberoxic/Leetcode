class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        
        if (size <= 1) 
        {
            return nums;
        }
        
        vector<int> ans;
        
        if (nums[0] + 1 < nums[1]) 
        {
            ans.push_back(nums[0]);
        }
        
        for (int i = 1; i < size - 1; i++) {
            if (nums[i + 1] - nums[i] > 1 && nums[i] - nums[i - 1] > 1) {
                ans.push_back(nums[i]);
            }
        }
        
        if (nums[size - 1] > nums[size - 2] + 1) {
            ans.push_back(nums[size - 1]);
        }
        
        return ans;
    }
};