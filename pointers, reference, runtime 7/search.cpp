#include <iostream>
using namespace std;

int binary_search(int arr[], int x, int array_length);

int main() {

    int arr[6] = {1,2,3,4,5,6};
    
    int x = 5;

    int arrLength = sizeof(arr)/sizeof(arr[0]);
    int numSearch;

    numSearch = binary_search(arr, x, arrLength);

    if(numSearch == -1) cout<<"Num is not in the array."<<endl;
    else cout<<"Num is in the array, index is: "<<numSearch<<endl;

    return 0;
}


int binary_search(int arr[], int x, int array_length){
    int left = 0, right = array_length - 1;
    while(left <= right) {
        int mid = left + (right - left) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) {
            left = mid + 1;
        }else {
            right = mid - 1;
        }
    }
    return -1;
}

//linear search runtime = BIg-theta(n)
//                      = big(n) the upper bound, considering n = arrayLength