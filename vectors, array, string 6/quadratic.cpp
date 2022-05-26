#include <iostream>
#include <cmath>
using namespace std;

const int TWO_SOLUTIONS = 2;
const int ONE_SOLUTIONS = 1;
const int NO_SOLUTIONS = 0;
const int NO_REAL_SOLUTIONS = 4;
const int ALL_REAL_SOLUTIONS = 3;


int quadratic (double a, double b, double c, double& outX1, double& outX2);
int linear(double b, double c, double& outX);


int main() {
    double a, b, c, x1, x2;
    cout<<"Please enter three integers: "<<endl;
    cin>>a>>b>>c;
  

    switch(quadratic(a, b, c, x1, x2)) {
        case TWO_SOLUTIONS:
            cout<<"There are two solutions "<<x1<<" "<<x2<<endl;
            break;
        case ONE_SOLUTIONS:
            cout<<"There is one solution "<<x1<<endl;
            break;
        case NO_SOLUTIONS:
            cout<<"There is no solutions"<<endl;
            break;
        case NO_REAL_SOLUTIONS:
            cout<<"There is no real solutions"<<endl;
        case ALL_REAL_SOLUTIONS:
            cout<<"There are all real number solutions."<<endl;
            break;
        default:
            cout<<"Error"<<endl;
            break;
    }
    return 0;

}

int quadratic (double a, double b, double c, double& outX1, double& outX2) {
    double delta;
    double x1, x2;
    delta = b * b - 4 * a * c;
    if(a != 0.0) {
        if(delta > 0){
            x1 = (-b + sqrt(delta))  / 2 * a;
            x2 = (-b - sqrt(delta))  / 2 * a;
            outX1 = x1;
            outX2 = x2;
            return TWO_SOLUTIONS;
        } else if (delta == 0) {
            x1 = -b / 2 * a;
            outX1;
            return ONE_SOLUTIONS;
        } else {
            return NO_REAL_SOLUTIONS;
        }

    } else {// a == 0 linear function
        return linear(b, c, outX1); // reference in this function

    }
}

int linear(double b, double c, double& outX) {
    double x;
    if(b == 0 && c == 0) {
        x = 0;
        outX = x;
        return ALL_REAL_SOLUTIONS;
    } else if (b != 0) {
        x = - c / b;
        outX = x;
        return ONE_SOLUTIONS;
    } else { // b == 0 && c != 0
        return NO_REAL_SOLUTIONS;
    }
}
