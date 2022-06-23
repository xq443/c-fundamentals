#include <iostream>
using namespace std;

void func1(int* ptr) {
    *ptr = 200;        
}
void func2(int* ptr) {
    ptr = new int(200); //pass by value //memory leak
}

void func3(int& val) {
    val = 200;
}
int& maxRef(int& x, int& y) {
    if(x > y) {
        return x;
    }else
        return y;
}
int* maxRef(int& x, int& y){
    if(x > y) {
        return &x;
    }else
        return &y;
}
int& func4(int& val) {
    return val; //returns a varaible that existed before the function started
}
int func5() {
    int val = 100; //when func5 ends, int val destroyed because it's a stack dynamic variable
    return val; //return sth we created.
}
int& func6() {
    int val = 100; 
    return val; //return sth we created.
}
void printThing(const Thing& t1){
    cout<<t1.getX()<<endl;
    //t1.setX(100);
}

class Thing {
    int x;
public:
    Thing(const Thing& rhs) :x(0) {*this = rhs;}//explicit call to assignment operator
    Thing& operator = (const Thing& rhs);
    /*explicit*/ Thing(int newval = 0) :x(newval) {} // {x = newval;}
    void setX(int newval) {x = newval;}
    int getX() const{return x;} // the "this" object (calling object) cannot change(const)
    Thing operator+(const Thing& rhs);
    //friend Thing operator-(const Thing& lhs, const Thing& rhs);
    Thing& operator++(); //pre-increment
    Thing operator++(int); //post-increment
};
Thing& Thing:: operator=(const Thing& rhs) {//assignment operator and copy constructor
    if(this == &rhs) // test for "self-assignment"
    return *this;
    x = rhs.x;
    return *this;
}
Thing& Thing::operator++() {
    x++;
    return *this;
}
Thing Thing::operator++(int) {//returned data type + class name + scope resolution operator + funciton name + parameter list
    Thing temp(*this); //make a copy of this
    x++;
    return temp;
}
Thing Thing::operator+(const Thing& rhs) const { //member
    Thing temp;
    temp.x = x + rhs.x;
    return temp;
}
Thing operator-(const Thing& lhs, const Thing& rhs) {//non-member
    Thing temp(lhs.getX() - rhs.getX());
    //temp.x = lhs.x - rhs.x; //only works if we're a friend, but we dont need it anyhow
    return temp;
}

int main() {
    int* arr = new int[3];//pointer pointing to the integer
    int** ptrarr = new int*[3];// pointer pointing to the integer pointer

    int x;
    int* ptrtoX = &x;
    int** ptrToPtrToX = &ptrtoX;
    
    Thing a;
    Thing b(a); //copy constructor
    b = a; //assignment operator

    Thing one(100); //explicite call to the constructor
    Thing two(200);
    Thing result;
    result = one + two; //call to operator+, one.operator+(two)
    result = two - one; //call to operator-, operator-(two, one);
    result = one + 20; // call to constructor AND operator+, one.operator+(Thing(20))
    //result = 20 + one; // implicite creation is not allowed for a calling object
    result = 20 - one; //call to constructor AND operator-, one.operator-(Thing(20), one)
    result = one + 7.5; //will add 7, not 7.5


    int x;
    int y;

    x = 5;
    y = (x++); //post-increment, return te original value of x
    cout<<"x="<<x<<"\ty="<<y<<endl; //x=6, y=5

    x = 5;
    y = ++x; //pre-increment, return x
    cout<<"x="<<x<<"\ty="<<y<<endl; // x=6, y=6
    ++(++x); //x+=2;
    //(x++)++; //as silly as saying 5++


/*  int x = 100;
    int y = 200;
    int& z = maxRef(x, y);

    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    cout<<"Z="<<z<<endl;
    z++;
    cout<<"Changing Z"<<endl;
    cout<<"X="<<x<<endl;
    cout<<"Y="<<y<<endl;
    cout<<"Z="<<z<<endl;
    */

    /*int* ptr = new int(100);

    func1(ptr);
    cout<<"Ptr's value after func1:"<< *ptr << endl;

    // *ptr = 100;
    // func2(ptr);
    // cout<<"Ptr's value after func2:"<< *ptr << endl;
    *ptr = 100;
    func3(*ptr);
    cout<<"Ptr's value after func3:"<< *ptr << endl;
    

    delete ptr;
    */

}