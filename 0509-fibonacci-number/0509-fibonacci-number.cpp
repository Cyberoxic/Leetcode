class Solution {
public:
    int fib(int n) 
    {
        int a=0,b=1;
        if(n>1)
        {
            for(int i=2; i<=n;i++)
            {
                int sum=a+b;
                a=b;
                b=sum;
            }
            return b;
        }
        else return n;
        //recursion technique but it took 9ms to submit
        //if(n<=1) return n;
        //else
        //{
        //    return fib(n-1)+fib(n-2);
        //}
    }
};