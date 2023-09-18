// https://leetcode.com/problems/length-of-last-word/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int ans=0;
        for(int i=s.length()-1;i>=0;i--){
            if (ans == 0 && s[i] == " "){
                continue;
            }
            else if(ans != 0 && s[i] == " "){
                break;
            }
            else if(ans ==0; && s[i] == " ")    
            ans++
        }
        return a;
    }
    
};
};