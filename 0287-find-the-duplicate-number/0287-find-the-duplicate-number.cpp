class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int begin = 0;
        int end = 0;
        do{
            begin=nums[begin];
            end=nums[nums[end]];
        } while(begin!=end);
        begin=0;
        while(begin!=end)
        {
            begin=nums[begin];
            end=nums[end];
        }
        return begin;
        
    }
};
