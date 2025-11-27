#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int n,int target)
{ 
  int l=0;
  int h=arr.size()-1;
  int mid;
  while(l<=h){
      if (arr[l] == target)
      {
        return l;
      }
      if (arr[h] == target)
      {
        return h;
      }
      mid= (l + h) / 2 ;
      if (arr[mid] == target)
      {
        return mid;
      }
      else if (arr[mid] < target)
      {
        h = mid - 1;
        mid = (l + h) / 2;
      }
      else if (arr[mid] > target)
      {
        l = mid + 1;
        mid = (l + h) / 2;
      }
   }
   return -1;
}

int main()
{  
    vector<int> arr(6);
    int n = arr.size();
    int target;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> target;
    int ans=binarySearch(arr, n,target);
    if (ans != -1)
      cout << "Found at index: " <<  ans << endl;
    else
      cout << "Not found";
    return 0;
}
