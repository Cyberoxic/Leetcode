class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int l=m,r=0;
        while(l<nums1.size()&&r<n)
        {
            nums1[l]=nums2[r];
            l++;
            r++;
        }
        sort(nums1.begin(),nums1.end());
    }
};