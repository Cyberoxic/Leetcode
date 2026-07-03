class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0,k=0;
        vector<int> merge(n+m);
        while(i<m&&j<n)
        {
            if(nums1[i]<=nums2[j])
            {
                merge[k]=nums1[i];
                k++;
                i++;
            }
            else
            {
                merge[k]=nums2[j];
                k++;
                j++;
            }
        }

        while(i<m) 
        {
            merge[k]=nums1[i];
            k++;
            i++;
        }

        while(j<n) 
        {
            merge[k]=nums2[j];
            k++;
            j++;
        }

        for (int i=0;i<m+n;i++) {
            nums1[i] = merge[i];
        }
    }
};