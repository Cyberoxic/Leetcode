class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
           int a=nums[i]; // 'a' is the current number we are looking at
           int n=target-a; 
           if(mpp.find(n)!=mpp.end()) //finding the n in hashmap
           {
                return {mpp[n],i}; //
           }
           else mpp[a]=i; //stores the index as the value
        }
        return{-1,-1};
    }
};