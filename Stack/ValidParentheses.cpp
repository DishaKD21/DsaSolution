//Valid Parentheses
//push open bracket in stack and take one pointer for that then keep checking if the bracket 
//is close then check if it is similar to the top then pop the element from the stack 
//otherwise it will be false or invalid parentheses
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
       if(s[0]=='}' or s[0]==']' or s[0]==')'){
        return false;
       }
       for(int i=0;i<s.size();i++){     
        if(s[i]=='{' or s[i]=='[' or s[i]=='(' )
       { st.push(s[i]);
       } 
       else
       {
          if (st.empty()) {
                    return false;
                }
        if(st.top() =='{' && s[i] =='}' || st.top()=='[' && s[i] ==']' || st.top() =='(' && s[i] ==')'){
            st.pop();
        }
        else{
           return false;
        }
       }
    }
    if(st.empty()){
        return true;
    }
    else{
        return false;
    }
    }
};