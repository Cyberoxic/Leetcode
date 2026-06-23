class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
        long rev=0, num= x;
        while(x!=0){
            rev=rev*10+(x%10);
            x=x/10;
        }
        if(rev==num)
            return 1;
        else
            return 0;
    }
};