class Solution {
public:
    bool judgeSquareSum(int c)
    {
        int n=sqrt(c);
        long a=0,b=n;
        while(a<=b)
        {
            long sum= (a*a)+(b*b);
            if(sum==c)
                return true;
            else if(sum>c)
                b--;
            else
                a++;
        }
        return false;
    }
};