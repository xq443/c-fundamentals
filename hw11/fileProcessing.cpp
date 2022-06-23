#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void openInputFile(ifstream& inFile) {
    string filename;
    cout<<"What filename?";
    cin>>filename;
    inFile.open(filename);
    while(!inFile) {
        cout<<"FILE FAILED TO OPEN!"<<endl;
        cout<<"What filename? ";
        cin>>filename;
        inFile.clear();
        inFile.open(filename); 
    }
}
struct Student{
    int id;
    double testScore;
    string name;
};
int main() {
    ifstream inFile;
    openInputFile(inFile);
    vector<Student> v;
    Student temp;
    while(inFile >> temp.id) {
        inFile >> temp.testScore;
        inFile.ignore(9999, '\t');
        getline(inFile, temp.name);
        v.push_back(temp);
    }
    cout<<"Students' testscore over 90 are: "<<endl;
    for(Student n : v) {
        if(n.testScore > 90) {
            cout<<n.name<<endl;
        }
    }
    return 0;
}