class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int s=nums.size();
        vector<int> ans(s);
        int left=0,right=s-1,k=s-1;
        while(left<=right)
        {
            int left_square=nums[left]*nums[left];
            int right_square=nums[right]*nums[right];
            if(left_square>right_square)
            {
                ans[k]=left_square;
                left++;
            }
            else
            {
                ans[k]=right_square;
                right--;
            }
            k--;
        }
        return ans;
    }
};
