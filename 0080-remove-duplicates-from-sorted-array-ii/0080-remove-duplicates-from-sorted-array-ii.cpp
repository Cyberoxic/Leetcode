class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size()<=2) {
            return nums.size();
        }
        int a=2;
        for (int b=2;b<nums.size();b++) 
        {
            if (nums[b]!=nums[a-2]) 
            {
                nums[a]=nums[b];
                a++;
            }
        }    
        return a;
    }
};
