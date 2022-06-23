#include <iostream>
using namespace std;

void swap(int &idx1, int &idx2);
void bubbleSort(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

int main() {
    int arr [] = {4,1,3,7,2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, arrSize);
    printArray(arr, arrSize);
    return 0;
}

void swap(int &idx1, int &idx2) {
    int temp = idx1; 
    idx1 = idx2;
    idx2 = temp;
}

void bubbleSort(int arr[], int arrSize) {
    for(int i = 0 ; i < arrSize - 1 ; i++) {
        for(int j = 0;  j < arrSize - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void printArray(int arr[], int arrSize) {
    for(int i = 0; i < arrSize ; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}