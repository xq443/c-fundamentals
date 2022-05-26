#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {

//section a
    cout<<"section a"<<endl;
    int num, len;
    double geoMean;
    int  product = 1;

    cout<<"Please enter the length of the sequence: ";
    cin>>len;
    cout<<"Please enter your sequence: "<<endl;

    for(int i = 1; i <= len; i++) {
        cin>>num;
        product = num  * product;
    }

    geoMean = pow((float)product, (float)1 / len);
    cout<<"The geometric mean is: "<<fixed<<setprecision(4)<<geoMean<<endl;


//section b
    cout<<"section b"<<endl;
    int pro = 1, length = 0;
    double geo;

    cout<<"Please enter a non-empty sequence of positive integers, each one in a separate line. End your sequence by typing -1: "<<endl;
    
    while(true) {
        cin>>num;
        if(num == -1) break;
        pro = pro * num;
        length++;
    }

    geo = pow((float)pro, (float)1 / length);
    cout<<"The geometric mean is: "<<fixed<<setprecision(4)<<geo;

    return 0;

}