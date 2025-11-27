#include <bits/stdc++.h>
using namespace std;

int lcs(string &s1, string &s2){
    int m= s1.length();
    int n = s2.length();
    vector<vector<int>> l(m+1,vector<int>(n+1,0));
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if (s1[i - 1] == s2[j - 1])
            {
                l[i][j] = l[i - 1][j - 1] + 1;
            }
            else{
              l[i][j] = max(l[i][j-1], l[i-1][j]);
            }
        }
    }
    return l[m][n];
}

int main(){
    string s1;
    cin>>s1;
    string s2;
    cin>>s2;
    int ans = lcs(s1, s2);
    cout<<ans;
    return 0;
}