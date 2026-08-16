class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        int num1 = INT_MIN, num2 = INT_MIN;
        int num3 = INT_MAX, num4 = INT_MAX;

        for (int num : nums) {
            if (num > num1) {
                num2 = num1;
                num1 = num;
            } else if (num > num2) {
                num2 = num;
            }

            if (num < num3) {
                num4 = num3;
                num3 = num;
            } else if (num < num4) {
                num4 = num;
            }
        }
        return (num1 * num2) - (num3 * num4);
    }
};
