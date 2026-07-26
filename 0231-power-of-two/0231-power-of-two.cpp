#include<cmath>
class Solution {
public:
    bool isPowerOfTwo(int n) {
        /*Recursion but time takes is O(log n)
        if(n<=0) return false;
        if(n==1) return true;
        if(n%2!=0) return false;
        
        return isPowerOfTwo(n/2);*/

        if(n<=0) return false;
        int x=log2(n);
        if(pow(2,x)==n)
        {
            return true;
        }
        return false;

        //Time O(1) Space O(1)
    }
};
