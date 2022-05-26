#include <iostream>
using namespace std;
const int MAX_STUDENT_NUMBER = 60;
int main() {
    int numOfStudents;
    int gradeList[4];
    int grade;
    int sum = 0;
    double average;

    cout<<"Please enter the number of the students: "<<endl;
    cin>>numOfStudents;

    cout<<"Please enter the grades of the students: "<<endl;

    for(int i = 0; i < numOfStudents; i++) {
        cin>>grade;
        gradeList[i] = grade;
        sum += gradeList[i];
    }
    average = (double)sum / (double) numOfStudents;

    for(int i = 0; i < numOfStudents; i++) {
        if(gradeList[i] >  average) {
            cout<<gradeList[i]<<" ";
        }
    }
    cout<<endl;

    //calculate the average
    //find the above average 
    

    return 0;
}