#include <iostream>
#include <string>
using namespace std;
void printArray(int testArray[]);
void input(int userInput[]);
void mapping(int actualPwd[], int userInput[], int testarr[]);

int main() {
   
    int actualPwd[5] = {1,2,3,4,5};
    int userInput[5];

    int testarr1[10] = {3,2,3,1,1,3,2,2,1,3};
    printArray(testarr1);
    int userInput1[5];
    input(userInput1);
    mapping(actualPwd, userInput1, testarr1);

    int testarr2[10] = {1,1,2,3,1,2,2,3,3,3};
    printArray(testarr2);
    int userInput2[5];
    input(userInput2);
    mapping(actualPwd, userInput2, testarr2);
    return 0;
}

void printArray(int testArray[]){
    cout<<"Please enter your PIN according to the following mapping:"<<endl;
    cout<<"PIN: "<<"0 1 2 3 4 5 6 7 8 9"<<endl;
    cout<<"NUM: ";
    for(int i = 0; i < 10; i++) {
        cout<<testArray[i]<<" ";
    }
    cout<<endl;
}

void input(int userInput[]) {
        for(int p = 0; p < 5; p++){
            scanf("%1d",&userInput[p]); 
    }
}

void mapping(int actualPwd[], int userInput[], int testarr[]) {
    bool flag = true;
    for(int i = 0; i < 5; i++) {
        int code = actualPwd[i];
        if(userInput[i] != testarr[code]) {
            flag = false;
            break;
        }
    }
    if(flag == true) {
        cout<<"Your PIN is correct"<<'\n'<<endl;
    }else {
        cout<<"Your PIN is not correct"<<'\n'<<endl;
    }
}
