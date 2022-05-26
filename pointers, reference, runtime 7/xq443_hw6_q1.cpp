#include <iostream>
using namespace std;

int minInArray(int arr[], int arrSize);
int main() {
    int arr[20];
    int arrSize = 20;
    int min;
    
    cout<<"Please enter 20 integers seperated by a space: "<<endl;
    for(int i = 0; i < arrSize; i++) {
        cin>>arr[i];
    }

    min = minInArray(arr, arrSize); 
    cout<<"The minimum value is "<<min<<", and it is located in the following indices: ";

    for (int i = 0; i < arrSize; i++){
        if(min == arr[i]) {
            cout<<i<<" ";
        }
    }
    return 0;
}
int minInArray(int arr[], int arrSize){
    int min = arr[0];
    for(int i = 0; i < arrSize; i++){
        if(arr[i] <= min) {
            min = arr[i];
        }
    }
    return min;
}