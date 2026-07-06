class Solution {
public:
    bool check(vector<int>& nums) {
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            bool sorted=true;
            for(int j=0;j<s-1;j++)
            {
                int a=nums[(i+j)%s];
                int b=nums[(i+j+1)%s];
                if(a>b)
                {
                    sorted=false;
                    break;
                }
            }
            if(sorted)
                return true;
        }
        return false;
    }
};