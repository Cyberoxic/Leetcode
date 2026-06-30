class Solution {
    public boolean detectCapitalUse(String word) {
        int c=0;
        if (word.length()>0){
            for(int i=0; i< word.length();i++)
            {
                if(Character.isUpperCase(word.charAt(i)))
                {    
                    c++;
                }
            }
            if (c==word.length()||c==0||(c==1 && Character.isUpperCase(word.charAt(0))))
            {
                return true;
            }
            else return false;
        }
        else return false;
    }
};