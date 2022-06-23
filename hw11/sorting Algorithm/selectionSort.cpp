#include <iostream>
using namespace std;

int findIndexofMin(int arr[], int low, int high);
void swap(int& a, int& b);
void selectionSort(int arr[], int arrSize);
void printArray(int arr[], int arrSize);

int main() {
    int arr[5] = {3,2,8,103,1};
    selectionSort(arr, 5);
    printArray(arr, 5);
    return 0;
}

void selectionSort(int arr[], int arrSize) {
    int minIdx;
    for(int i = 0; i < arrSize; i++) {
        minIdx = findIndexofMin(arr, i, arrSize - 1);
        swap(arr[i], arr[minIdx]);
    }
}

int findIndexofMin(int arr[], int low, int high){
    int min = arr[low];
    int minIdx = low;
    for(int i = low + 1; i <= high; i++) {
        if(arr[i] < min) {
            min = arr[i];
            minIdx = i;
        }
    }
    return minIdx;

}
void swap(int& a, int& b) {
    int temp = a;
    a = b; 
    b = temp;
}

void printArray(int arr[], int arrSize) {
    for(int i = 0; i < 5; i++) {
        cout<<arr[i]<<" ";
    }
}