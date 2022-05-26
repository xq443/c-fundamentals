#include <iostream>
#include <algorithm>
using namespace std;
int minInArray1(int arr[], int arrSize);
int minInArray2(int arr[], int low, int high);
int main() {
    int arr[10] = {9, -2, 14, 12, 3, 6, 2, 1, -9, 15};
    int res1, res2, res3, res4;

    res1 = minInArray1(arr, 10);
    res2 = minInArray2(arr, 0, 9);
    cout<<res1<<" "<<res2<<endl;

    res3 = minInArray2(arr, 2, 5);
    res4 = minInArray1(arr + 2, 4);
    cout<<res3<<" "<<res4<<endl;

    return 0;
}
int minInArray1(int arr[], int arrSize) {
    if(arrSize == 1) return arr[0];
    else {
        // int minValue = 0;
        // if(arr[arrSize - 1] < minValue) {
        //     minValue = arr[arrSize - 1];
        // }
        return min(arr[arrSize - 1], minInArray1(arr, arrSize - 1));
    }

}
int minInArray2(int arr[], int low, int high) {
    if(low == high) return arr[low];
    else {
        // int min = minInArray2(arr, low + 1, high);
        // if(arr[low] < min) min  = arr[low];
        
        // return min(arr[low], minInArray2(arr, low + 1, high));
        return min(arr[high], minInArray2(arr, low, high - 1));
    }
    
}