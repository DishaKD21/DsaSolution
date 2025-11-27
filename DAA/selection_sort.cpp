#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void selectionSort(int arr[], int n, int min) {
    for (int i=0; i <n-1; i++) {
        min=i;
        for (int j = i+1; j < n; j++) {
            if (arr[min] > arr[j]) {
               min=j;
            }
        }
      if(i!=min){
        swap(arr[i],arr[min]);
      }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n]; 
    bool flag=false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min;
    selectionSort(arr, n ,min); 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}