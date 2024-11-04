//2490. Circular Sentence
//when space comes check for space's previous and next char if they are not same then give false
class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n=sentence.length();
       for(int i=0;i<n;i++){
        if(sentence[i]==' '){
            if(!(sentence[i-1]==sentence[i+1])){
               return false;
            }
        }
       }
       if(!(sentence[n-1]==sentence[0])){
        return false;
       }
      return true;
    }
};