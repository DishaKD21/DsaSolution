// #include<iostream>
// using namespace std;

// int Pow(int x, int power,int ans) {
//     for(int i=1;i<=power;i++){
//       ans*=x;
//     }
//    return ans;   
// }

// int main() {
//     int power,x,ans=1;
//     cout<<"enter number";
//     cin >> x;
//     cout<<"enter power";
//     cin >> power;
//     ans = Pow(x,power,ans);
//     cout<<ans;
//     return 0;
// }

#include<iostream>
using namespace std;

int Pow(int x, int power) {
    if(power==0){
      return 1;
    }
    else
    return x*Pow(x,power-1);   
}

int main() {
    int power,x,ans=1,i=1;
    cout<<"enter number";
    cin >> x;
    cout<<"enter power";
    cin >> power;
    ans = Pow(x,power);
    cout<<ans;
    return 0;
}
//for minus

#include<iostream>
using namespace std;

int Pow(int x, int power) {
    if(power==0){
      return 1;
    }
    else
    return x*Pow(x,power-1);   
}

int main() {
    int power,x,ans=1,i=1;
    cout<<"enter number";
    cin >> x;
    cout<<"enter power";
    cin >> power;
    ans = Pow(x,power);
    cout<<ans;
    return 0;
}
