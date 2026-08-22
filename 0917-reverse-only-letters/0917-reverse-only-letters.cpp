class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int b=0,e=n-1;
        while(b<e)
        {
            if(isalpha(s[b]) && isalpha(s[e]))
            {
                swap(s[b], s[e]);
                b++;
                e--;
            }
            else if (isalpha(s[b]) == false)
                b++;
            else
                e--;
        }
        return s;
    }
};