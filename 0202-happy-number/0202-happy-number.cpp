class Solution {
public:
    bool isHappy(int n) 
    {
        int sum=0;
        while (n>0)
        {
            int d=n%10;
            sum=sum+(d*d);
            n=n/10;
        }
        if (sum>9 || sum==7)
        {
            return isHappy(sum);
        }
        else if(sum==1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};