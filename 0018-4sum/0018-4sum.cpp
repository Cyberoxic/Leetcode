class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int size = nums.size();
        if (size < 4) return ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < size - 3; i++) {
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // --- PRUNING OPTIMIZATION FOR LOOP 1 ---
            // 1. Smallest possible sum starting with nums[i]
            if ((long long)nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
            // 2. Largest possible sum starting with nums[i]
            if ((long long)nums[i] + nums[size - 3] + nums[size - 2] + nums[size - 1] < target) continue;

            for (int j = i + 1; j < size - 2; j++) {
                if (j > i + 1 && nums[j] == nums[j - 1]) continue;

                // --- PRUNING OPTIMIZATION FOR LOOP 2 ---
                // 1. Smallest possible sum with fixed nums[i] and nums[j]
                if ((long long)nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;
                // 2. Largest possible sum with fixed nums[i] and nums[j]
                if ((long long)nums[i] + nums[j] + nums[size - 2] + nums[size - 1] < target) continue;

                int left = j + 1;
                int right = size - 1;

                while (left < right) {
                    long long current_sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];

                    if (current_sum == target) {
                        ans.push_back({nums[i], nums[j], nums[left], nums[right]});
                        
                        while (left < right && nums[left] == nums[left + 1]) left++;
                        while (left < right && nums[right] == nums[right - 1]) right--;
                        
                        left++;
                        right--;
                    } 
                    else if (current_sum < target) {
                        left++;
                    } 
                    else {
                        right--;
                    }
                }
            }
        }
        return ans;
    }
};
        