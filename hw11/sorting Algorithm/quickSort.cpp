#include <iostream>
using namespace std;

int getPivot(int low, int high);
void swap(int &idx1, int &idx2);
int partition(int arr [], int low, int high);
void quickSort(int arr [], int low, int high);
void printArray(int arr [], int arrSize);


int main() {
    int arrSize = 10;
    int arr[10] = {3,2,1,5,6,7,2,0,1,2};
    quickSort(arr, 0, arrSize - 1);
    printArray(arr, 10);
    return 0;

}
void quickSort(int arr [], int low, int high) {
    if(low < high){
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }

}


void swap(int &idx1, int &idx2) {
    int temp = idx1;
    idx1 = idx2;
    idx2 = temp;

}
int partition(int arr [], int low, int high) { 
    int getPivot = rand () % (high - low + 1) + low;
    swap(arr[high], arr[getPivot]);
    int i = low - 1;
    for(int j = low; j <= high - 1; j++) {
        if(arr[j] < arr[high]) {
            i++;
            swap(arr[i], arr[j]); //10, 30, 40, 50, 80, 90, 70
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void printArray(int arr [], int arrSize) {
    for(int i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}