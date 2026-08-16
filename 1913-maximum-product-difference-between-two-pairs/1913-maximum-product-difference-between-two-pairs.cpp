class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int num1 = 0, num2 = 0, num3 = *max_element(nums.begin(),nums.end()), num4 = num3;
        for (int num : nums) 
        {
            if (num > num1) 
            {
                num2 = num1;
                num1 = num;
            } else if (num > num2) 
            {
                num2 = num;
            }
            if (num < num3) 
            {
                num4 = num3;  
                num3 = num; 
            } 
            else if (num < num4) 
            {
                 num4 = num;
            }
        }
        return (num1 * num2) - (num3 * num4);
    }
};