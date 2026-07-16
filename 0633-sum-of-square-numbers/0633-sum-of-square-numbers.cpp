class Solution {
public:
    bool judgeSquareSum(int c)
    {
        int n=sqrt(c);
        long a=0,b=n;
        if(c==1||c==0) return true;
        while(a<=b)
        {
            long sum= (a*a)+(b*b);
            if(sum==c)
                return true;
            else if(sum>c)
                b--;
            else if(sum<c)
                a++;
        }
        return false;
    }
};