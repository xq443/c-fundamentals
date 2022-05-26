#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize);

int main() {
    int n, min;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements of the array: ";

    int arr[n];
    for(int i = 0; i < n; i++){
       cin>>arr[i];
    }

    cout <<"The array is: ";
    for(int i = 0; i < n;i++)
       cout<<arr[i]<<" ";

    min = minInArray(arr, n);
    cout <<"\nThe minimum element in the array is: "<<min;

    return 0;
}

int minInArray(int arr[], int arrSize){
    int min = arr[0];
    for(int i = 0; i < arrSize; i++) {
        if(arr[i] <= min) {
            min = arr[i];
        }
    }
    return min;
}
