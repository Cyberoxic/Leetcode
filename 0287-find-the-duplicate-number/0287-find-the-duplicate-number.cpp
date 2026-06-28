class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int start = nums[0], end = nums[0];
        do{
            start=nums[start];
            end=nums[nums[end]];
        } while(start!=end);
        start=nums[0];
        while(start!=end)
        {
            start=nums[start];
            end=nums[end];
        } 
        return start;     
    }
};
