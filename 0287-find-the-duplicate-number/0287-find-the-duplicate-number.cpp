class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int begin = nums[0], end = nums[0];
        do{
            begin=nums[begin];
            end=nums[nums[end]];
        } while(begin!=end);
        begin=nums[0];
        while(begin!=end)
        {
            begin=nums[begin];
            end=nums[end];
        }
        return begin;     
    }
};
