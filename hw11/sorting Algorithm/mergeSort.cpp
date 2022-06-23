#include <iostream>
using namespace std;

void mergeSort(int arr[], int low, int high);
void merge(int arr[], int low, int mid, int high);
void printArray(int arr[], int arrSize);

int main() {
    int arr[8] = {9,3,2,6,1,0,10,8};
    int arrSize = 8;
    mergeSort(arr, 0, arrSize - 1);
    printArray(arr, arrSize);
    return 0;

}
void mergeSort(int arr[], int low, int high){
    if(low == high) {
        return;
    }else {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
void merge(int arr[], int low, int mid, int high){
    int highStart = mid + 1;
    int size = high - low + 1;
    int *mergedArr = new int[size];

    int resIdx = 0;
    int iLeft = low;
    int iRight = highStart;

    while(iLeft <= mid && iRight <= high) {
        if(arr[iLeft] < arr[iRight]){
            mergedArr[resIdx] = arr[iLeft];
            iLeft++;
            resIdx++;
        }else {
            mergedArr[resIdx] = arr[iRight];
            iRight++;
            resIdx++;
        }
    }
    while(iLeft <= mid) {
        mergedArr[resIdx] = arr[iLeft];
        iLeft++;
        resIdx++;
    }
    while(iRight <= high) {
        mergedArr[resIdx] = arr[iRight];
        iRight++;
        resIdx++;
    }

    for(int iArr = low, i = 0; i < size; i++, iArr++) {
        arr[iArr] = mergedArr[i];
    }
    delete []mergedArr;
}
void printArray(int arr[], int arrSize){
    for(int i = 0; i < arrSize; i++) {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}