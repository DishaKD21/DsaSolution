#include <bits/stdc++.h>
using namespace std;

void deleteOccurence(int target, int arr[], int size) {
    int count = 0;
    // Count occurrences of the target element
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    // Create a new array of the appropriate size
    int new_arr_size = size - count;
    int new_arr[new_arr_size];
    int j = 0;
    // Copy elements that are not equal to target to the new array
    for (int i = 0; i < size; i++) {
        if (arr[i] != target) {
            new_arr[j++] = arr[i];
        }
    }
    // Print the new array
    for (int i = 0; i < new_arr_size; i++) {
        cout << new_arr[i] << " ";
    }
    cout << endl;
}
void countFreq(int arr[], int size)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < size; i++)
        mp[arr[i]]++;
    for (auto x : mp)
        cout << x.first << " " << x.second << endl;
}

int main() {
    int target = 2;
    int capacity = 10;
    int size = 6;
    int arr[capacity] = {1, 2, 3, 4, 2, 5};
    deleteOccurence(target, arr, size);
    countFreq(arr, size);
    return 0;
}