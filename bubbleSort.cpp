#include <iostream>
using namespace std;
void bubbleSort(int arr[], int arrSize);
int main() {
    int arr[6] = {0,1,5,10,100,2};
    bubbleSort(arr, 6);

    return 0;
}

void bubbleSort (int arr[], int arrSize) {
    int temp = 0;
    for(int i = 0; i < arrSize - 1; i++) {
        for(int j = 0; j < arrSize - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }  
        }
    }
    for(int i = 0; i < arrSize - 1; i++) {
        cout<<arr[i]<<" ";
    }
}