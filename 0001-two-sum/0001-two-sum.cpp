class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<pair<int,int>> arr(n);
        for(int i=0;i<n;i++) {
            arr[i]={nums[i],i};
        }
        sort(arr.begin(),arr.end());
        vector<int> result;
        int l=0,r=n-1;
        while(l<r)
        {
            int sum=arr[l].first+arr[r].first;
            if(sum==target)
            {
                result.push_back(arr[l].second);
                result.push_back(arr[r].second);
                return result;
            }
            else if(sum<target)
                l++;
            else
                r--;
        }
        return {-1,-1};
    }
};
