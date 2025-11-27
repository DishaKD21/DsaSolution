// #include <bits/stdc++.h>
// using namespace std;

// vector<int> conquer(vector<int> &left, vector<int> &right)
// {
//   int i = 0;
//   int j = 0;
//   vector<int> ans;
//   while (i < left.size() && j < right.size())
//   {
//     if (left[i] < right[j])
//     {
//       ans.push_back(left[i]);
//       i++;
//     }
//     else{
//       ans.push_back(right[j]);
//       j++;
//     }
    
//   }
//   while (i < left.size())
//   {
//     ans.push_back(left[i]);
//     i++;
//   }
//   while (j < right.size())
//   {
//     ans.push_back(right[j]);
//     j++;
//   }
//   return ans;
// }
// vector<int> divide(vector<int>& arr)
// { 
//   if(arr.size()<=1){
//     return arr;
//   }
//   int mid = arr.size() / 2;
//   vector<int> left;
//   vector<int> right;

//   for(int i=0;i<mid;i++){
//      left.push_back(arr[i]);
//   }
//   for(int i=mid;i<arr.size();i++){
//     right.push_back(arr[i]);
//   }
//   left = divide(left);
//   right = divide(right);
//   return conquer(left,right);
// }
 
// int main()
// {   
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     vector<int> sortedArr = divide(arr);

//     for (int i = 0; i < n; i++)
//       cout << sortedArr[i] << " ";
//     return 0;
// }

























#include<bits/stdc++.h>
using namespace std;

vector<int> conquer(vector<int> &left,vector<int> &right){
  vector<int> ans;
  int i=0,j=0;
  while(i<left.size() && j<right.size()){
    if(left[i]<right[j]){
      ans.push_back(left[i++]);
    }
    else
    {
      ans.push_back(right[j++]);
    } 
  }
  while(i<left.size()){
    ans.push_back(left[i++]);
  }
  while (j < right.size())
  {
    ans.push_back(right[j++]);
  }
  return ans;
}
vector<int> divide(vector<int> &arr){
  int mid=arr.size()/2;
  if(arr.size()<=1){
    return arr;
  }
   vector<int> left;
   vector<int> right;
   for (int i = 0; i < mid; i++)
   {
    left.push_back(arr[i]);
  }
  for(int i=mid;i<arr.size();i++){
    right.push_back(arr[i]);
  }
     left = divide(left);
     right = divide(right);
     return conquer(left, right);
   }

int main()
{
  int n;
  cin>>n;
  vector<int> arr(n);
  
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  vector<int> ans = divide(arr);
  for (int i = 0; i < n; i++)
  {
    cout<< ans[i];
  }
  return 0;
}
