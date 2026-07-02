class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    map<int,int> mpp;
        int n=numbers.size();
        for(int i=0;i<n;i++)
        {
           int a=numbers[i];
           int n=target-a; 
           if(mpp.find(n)!=mpp.end())
           {
                return {mpp[n]+1,i+1};
           }
           else mpp[a]=i;
        }
        return{-1,-1};
    }
};
