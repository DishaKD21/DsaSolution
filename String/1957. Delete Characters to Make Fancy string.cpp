 //1957. Delete Characters to Make Fancy String
 //add two characters in ans string and then check from 2-index to last if i's previous and 
 //previous's previous is not equal to i then add i 
class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<3){
            return s;
        } 
        string ans;
        ans += s[0];
        ans += s[1];

        for(int i=2;i<s.size();i++){
            if(!(s[i]==s[i-1] && s[i]==s[i-2])){
                ans += s[i];
            }
        }
        return ans;
    }
};