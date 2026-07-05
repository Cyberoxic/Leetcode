class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=height.size();
        int l=0,r=s-1,ans=0;
        while(l<r)
        {
            int h=min(height[l],height[r]);
            int area=h*(r-l);
            ans=max(ans,area);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return ans;
    }
};