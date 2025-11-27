#include<iostream>
using namespace std;

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void bubbleSort(int arr[], int n) {
    for (int i = n - 1; i >= 1; i--) {
        bool flag = false;
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                flag=true;
            }
        }
      if(!flag){
        break;
      }
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n]; 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, n); 
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}



// #include<iostream>
// using namespace std;

// int main(){
//     cout<<"Enter size of array";
//     int size;
//     cin>>size;

//     int array [size];
//     for(int ind=0;ind<size;ind++)
//     {
//         cout<<"Enter array element at index "<<ind;
//         cin>>array[ind];
//     }

//     for(int pass=0;pass<size;pass++){
//         for(int ele = 0;ele<size-1-pass;ele++){
//             if(array[ele]>array[ele+1])
//             {
//                 int temp = array[ele];
//                 array[ele] = array[ele+1];
//                 array[ele+1] = temp;
//             } 
//         }
//     }


//     return 0;
// }
