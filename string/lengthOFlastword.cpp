class Solution {
    public:
        int lengthOfLastWord(string s) {
            int i=s.length()-1;
            int c=0;
            while(i>=0 && s[i]==' '){
               
                    i--;
            }
            while(i>=0 && s[i]!=' '){
               
                    c++;
                    i--;
               
            }
    
            return c;
        }
    };