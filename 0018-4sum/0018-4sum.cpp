class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int size = nums.size();
        if (size < 4) return ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < size - 3; i++) 
        {
            if (i > 0 && nums[i] == nums[i - 1]) continue;
            if ((long long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
            if ((long long)nums[i] + nums[size - 3] + nums[size - 2] + nums[size - 1] < target) continue;
            for (int j = i + 1; j < size - 2; j++) 
            {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
                if ((long long)nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;
                if ((long long)nums[i] + nums[j] + nums[size - 2] + nums[size - 1] < target) continue;
                int l = j + 1;
                int r = size - 1;
                while (l < r) 
                {
                    long long current_sum = (long long)nums[i] + nums[j] + nums[l] + nums[r];
                    if (current_sum == target) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]}); 
                        while (l < r && nums[l] == nums[l + 1]) l++;
                        while (l < r && nums[r] == nums[r - 1]) r--; 
                        l++;
                        r--;
                    } 
                    else if (current_sum < target) 
                    {
                        l++;
                    } 
                    else 
                    {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
        