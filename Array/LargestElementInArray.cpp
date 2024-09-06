//1 Largest Element in Array

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
         int a=arr[0];
         for(int i=0;i<n;i++)
         {
             if(arr[i]>=a){
                 a=arr[i];
             }
         }
          return a;
    }
};
