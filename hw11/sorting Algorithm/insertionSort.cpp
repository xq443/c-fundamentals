#include <iostream>
using namespace std;
void printArray(int arr[], int arrSize);
void insertionSort(int arr[], int start, int end);

int main() {
    int arr[] = {3,5,7,1,2};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, 0, arrSize - 1);
    printArray(arr, arrSize);
    return 0;
}

void insertionSort(int arr[], int start, int end) {
    for(int i = 0; i < end - start + 1; i++) {
        int temp = arr[i];
        int j = i;
        for(; j > start && arr[j - 1] > temp; j--){
            arr[j] = arr[j - 1];
        }
        arr[j] = temp;
    }
}
void printArray(int arr[], int arrSize) {
    for(int i = 0; i < arrSize ; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}