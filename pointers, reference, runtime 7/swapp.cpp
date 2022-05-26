#include <iostream>
using namespace std;


int main() {

    int a[]={100,50,20,30,60};  //{20,50,30,100,60}
    int p = 55;  

    int i = 0;

    int j = 4;

    int temp;

    while(i < j){

        while(i < j && a[i] < p) {

            i = i + 1; //i = 2 i = 3 i = 4
            }

        while(i < j && a[j] >= p){

            j = j - 1; //j = 3 j = 2 j = 1
            }

        if(i < j){

            temp = a[i];

            a[i] = a[j];

            a[j] = temp;

            }
    }

    for(int m = 0; m < 5; m++)

    {

        cout<<a[m]<<" ";

    }

}
