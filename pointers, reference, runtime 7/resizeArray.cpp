#include <iostream>
using namespace std;


void resizeArray(int*& arr, int size, int newSize) {
    int * temp = new int[newSize];
    for(int i = 0; i < size; i++) {
        temp[i] = arr[i];
    }
    delete [] arr;
    arr = temp;

}
int main() {
    int size = 10;
    int * arr = new int [size];
    for(int i = 0; i < size; i++) {
        arr[i] = i * 10;
    }
    int oneMore = 110;
    int newSize = 20;
    resizeArray(arr, size, newSize);
    arr[size++] = oneMore;
    for(int i = 0; i < newSize; i++) {
        cout<< arr[i]<<" ";
    }
    return 0;
}