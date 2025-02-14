//796. Rotate String
//start moving first char to the last and check every time if the string is match to the goal then 
//return true
class Solution {
public:
    bool rotateString(string s, string goal) {
        int n= s.length();
        int l= goal.length();
        if(n!=l){
            return false;
        }
        for(int i=0;i<n;i++){
          if(s==goal){
            return true;
          } 
          else{
            s=s.substr(1)+s[0];
          } 
        }
        return false;
        }
}; 