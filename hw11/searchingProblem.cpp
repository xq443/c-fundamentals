#include <iostream>
using namespace std;

int sortedSearch(int arr[], int arrSize, int val);
int main() {
    int arr[10] = {1,3,5,7,9,11,13,15,17};
    cout<<sortedSearch(arr,10,13)<<endl;
    return 0;
}
int sortedSearch(int arr[], int arrSize, int val) {
    int low = 0, high = arrSize - 1;
    bool found = false;
    int idx;

    while(found == false && low <= high) {
        int mid = (low + high) / 2;
        if(arr[mid] == val) {
            found = true;
            idx = mid;
        }
        else if(arr[mid] < val) {
            low = mid + 1;
        }
        else high = mid - 1;
    }

    if(found == true) {
        return idx;
    }else 
        return -1;

}