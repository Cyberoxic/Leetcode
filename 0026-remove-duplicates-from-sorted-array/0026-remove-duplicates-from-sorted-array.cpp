class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=1,c=1;
        if(nums.size()==0){
            return 0;
        }
        while(j<nums.size()){
            if(nums[j]!=nums[j-1]){
                c++;
                i++;
                nums[i]=nums[j];
                j++;

            }
            else j++;
        }
        return c;
    }
};