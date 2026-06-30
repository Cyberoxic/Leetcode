class Solution {
public:
    bool detectCapitalUse(string word) {
        int c = 0;
        int len = word.length();  
        for (int i = 0; i < len; i++) 
        {
            if (isupper(word[i])) 
            {    
                c++;
            }
        }
        if (c == len || c == 0 || (c == 1 && isupper(word[0]))) 
        {
            return true;
        }
        return false;
    }
};