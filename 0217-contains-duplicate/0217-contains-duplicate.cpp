class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        int n=nums.size();
        for( int i=0;i<n;i++)
        {
            int num=nums[i];
            if(st.find(num)!=st.end()){
                return true;
            }
            else st.insert(num);
        }
        return false;
    }
};