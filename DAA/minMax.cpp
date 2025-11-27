#include <bits/stdc++.h>
using namespace std;

// vector<int> conquer(vector<int> &left, vector<int> &right)
// {
//     while (i < left.size() && j < right.size())
//     {   
//         if (lmin < rmin)
//         {   
//             min=lmin;
//             i++;
//         }
//         else
//         {
//             min=rmin;
//             j++;
//         }
//     }
//     return {min,max};
// }
// vector<int> divide(vector<int> &arr)
// {
//     if (arr.size() <= 1)
//     {
//         return arr;
//     }
//     int mid = arr.size() / 2;
//     vector<int> left;
//     vector<int> right;

//     for (int i = 0; i < mid; i++)
//     {
//         left.push_back(arr[i]);
//     }
//     for (int i = mid; i < arr.size(); i++)
//     {
//         right.push_back(arr[i]);
//     }
//     left = divide(left);
//     right = divide(right);
//     return conquer(lmin, rmin);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> arr(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     vector<int> sortedArr = divide(arr);

//     for (int i = 0; i < n; i++)
//         cout << sortedArr[i] << " ";
//     return 0;
// }

#include <iostream>
using namespace std;
pair<int, int> find_min_max(int arr[], int start, int end)
{
    if (start == end)
    {
        return {arr[start], arr[end]};
    }
    int mid = start + (end - start) / 2;
    pair<int, int> left = find_min_max(arr, start, mid - 1);
    pair<int, int> right = find_min_max(arr, mid, end);

    return {min(left.first, right.first), max(left.second, right.second)};
}
void printArray(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i];
    }
    cout << endl;
}
int main()
{
    cout << "Enter size of array";
    int size;
    cin >> size;

    int array[size];
    for (int ind = 0; ind < size; ind++)
    {
        cout << "Enter array element at index " << ind;
        cin >> array[ind];
    }

    cout << "Original Array";
    printArray(array, size);
    pair<int, int> result = find_min_max(array, 0, size - 1);
    cout << "min: " << result.first << " and max:" << result.second;
    // cout << "After Array";
    // printArray(array, size);
    return 0;
}