#include <iostream>
#include <string>
#include <vector>
using namespace std;
void filter(string & text);
int main_vector();
vector<string> readText();

int main() {
    main_vector();
    return 0;
}
int main_vector() {
    vector<string> textVector;
    textVector = readText();
    for(int i = 0; i < textVector.size(); i++) {
        cout<<textVector[i]<<endl;
    }
    return 0;
}

void filter(string & curLine) {
    string temp = "";

    for(int i = 0; i < curLine.length(); i++) {
        if((curLine[i] >= 'a' && curLine[i] <= 'z') || (curLine[i] >= 'A' && curLine[i] <= 'Z')) {
            temp = temp + curLine[i]; 
        }
    }
    curLine = temp;
    cout<<curLine;
}

vector<string> readText() {
    vector<string> textVector;
    bool seenEndOfText = false;
    string curLine;
    int num;

    cout<<"Please enter a non-empty sequence of Strings. Each string should be in a separate line and consists of only alphanumeric characters."<<
    "To indicate the end of the input, enter an empty string in one line."<<endl;
    while(seenEndOfText == false) {
        getline(cin, curLine);
        if(curLine == "") {
            seenEndOfText == true;
        }else {
            textVector.push_back(curLine);
            
        }
    }
    return textVector;
    //cout<<"Number of Strings in the input sequence that contain no numeric characters: "<<num<<endl;
}