class Solution {
public:
    double myPow(double x, int n) {
        long long num=n;
        if (num<0) {
            x=1/x;
            num=-num;
        }
        double ans=1.0;
        double prod=x;
        while (num>0) {
            if (num%2==1) {
                ans=ans*prod;
            }
            prod=prod*prod;
            num=num/2;
        }
        return ans;
    }
};
