//Reverse Words in a String
//start pushing characters in stack from the end and then when space comes pop the whole word 
//and save in the string then remove the extra space 
class Solution {
public:
    string reverseWords(string s) {
        string str;
        stack<char> s1;
        int flag=0;
        for(int i=s.length()-1;i>=0;i--){

            if(s[i]!=' ')
            {   
                s1.push(s[i]);
                flag=1;
            }
            else if(s[i]==' '){
                 while(!s1.empty()){
                    str+=s1.top();
                    s1.pop();
                }
                if(flag==1){
                str+='  ';
                }
                flag=0;    
            }
        }
        while(!s1.empty()){
                    str+=s1.top();
                    s1.pop();
                }  
        if (!str.empty() && str.back() == ' ') {
            str.pop_back();
        }
        return str;
    }
};