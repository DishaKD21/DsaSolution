// #include<iostream>
// using namespace std;

// void swap(int &a, int &b) {
//     int c = a;
//     a = b;
//     b = c;
// }

// void insertionSort(int arr[], int n, bool flag) {
//      for()
// }

// int main() { 
//     int n;
//     cin >> n; 
//     int arr[n]; 
//     bool flag=false;
//     for (int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
//     insertionSort(arr, n ,flag); 
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    cout<<"Enter size of array:";
    int size;
    cin>>size;

    int array [size];
    for(int ind=0;ind<size;ind++)
    {
        cout<<"Enter array element at index "<<ind<<": ";
        cin>>array[ind];
    }

    for(int j = 1 ;j<size;j++){
        int key = array[j];
        int i = j-1;

        while(i >-1 && array[i]>key){
            array[i+1]= array[i];
            i--;
        }
        array[i+1]= key;
    }
    for (int ind = 0; ind < size; ind++)
    {
        cout << array[ind]<<" ";
        }

    return 0;
}