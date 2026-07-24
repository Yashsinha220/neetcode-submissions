class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length()-1;
        int i =0;
        while(i<n){
             if(!isalnum(s[i])){        // skip non-alphanumeric
                i++;
            }
            else if(!isalnum(s[n])){
                n--;
            }
            else if(tolower(s[i]) != tolower(s[n])){  // compare lowercase
                return false;
            }
            else {
                i++;
                n--;
            }
        }
        return true;
      
    }
};
