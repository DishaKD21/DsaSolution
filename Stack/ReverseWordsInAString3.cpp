// Reverse Words in a String III
//start from index 0 push the word till the space dont come and then pop the character til 
//stack becomes empty
class Solution {
public:
    string reverseWords(string s) {
        string str;
        stack<char> s1;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' ')
            {
                s1.push(s[i]);
            }
            else if(s[i]==' '){
                while(!s1.empty()){
                    str+=s1.top();
                    s1.pop();
                }
                str+=' ';
            }
        }
        while(!s1.empty()){
                    str+=s1.top();
                    s1.pop();
                }
        return str;
    }
};