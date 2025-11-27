// #include<iostream>
// using namespace std;

// int fact(int x) {
//     int ans=1;
//     for(int i=x;i>0;i--){
//       ans*=i; 
//     }
//    return ans;   
// }

// int main() {
//     int x,ans=0;
//     cout<<"enter number";
//     cin >> x;
//     ans = fact(x);
//     cout<<ans;
//     return 0;
// }

#include<iostream>
using namespace std;

int fact(int x) {
    int ans=1;
    for(int i=x;i>0;i--){
      ans*=i; 
    }
   return ans;   
}

int main() {
    int x,ans=0;
    cout<<"enter number";
    cin >> x;
    ans = fact(x);
    cout<<ans;
    return 0;
}
