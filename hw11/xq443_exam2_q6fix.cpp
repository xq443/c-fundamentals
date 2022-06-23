#include <iostream>
#include <vector>
using namespace std;

int main_vector();
vector<string> readText3();
void filter(vector<string> & textVector);

int main() {
    vector<string> textVector;
    textVector = readText3();
    filter(textVector);
    for(int i=0; i < textVector.size(); i += 1)
        cout<<textVector[i]<<endl;

    return 0;
}
vector<string> readText3(){
    vector<string> textVector;
    bool seenEndOfText;
    string currLine;

    cout<<"Please enter a non-empty sequence of Strings. Each string should be in a separate line and consists of only alphanumeric characters."<<
    "To indicate the end of the input, enter an empty string in one line."<<endl;

    seenEndOfText = false;
    while(seenEndOfText == false){
        getline(cin, currLine);
        if(currLine == "")
            seenEndOfText = true;
        else

            textVector.push_back(currLine);
    }
    return textVector;
}
void filter(vector<string> & textVector) {
    string temp = "";
    for(string curLine : textVector){
        for(int i = 0; i < curLine.length(); i++) {
            if(curLine[i] >= 48 &&  curLine[i] <= 57) {
                temp = temp + curLine[i]; 
                cout<<curLine[i]<<endl;
            }
        }
        curLine = temp;
        temp = "";
    }
}
