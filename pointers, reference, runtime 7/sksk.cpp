
#include <iostream>
#include <string>
using namespace std;

bool isDigits(string text, int start, int end);
void replace(string text, bool sign, int start, int end);
int main(){
    cout << "Please enter a line of text : " << endl;
    string text;
    getline(cin,text);
    
    int j = 0;
    bool flag = false; 
    for(int i = 0; i < text.length(); i++){
        if(text[i] == ' '){ 
            flag = isDigits(text, j, i); 
            replace(text, flag, j, i);
            j = i + 1; //start after ' '
        }

        flag = isDigits(text, j, text.length()); // the last word
        replace(text, flag, j, text.length());
    }
    cout<<text<<endl;
    return 0;
}

bool isDigits(string text, int start, int end){
    int size = text.length();
    for(int i = start; i < end; i++){
        if(text[i] >= '0' && text[i] <= '9'){
            continue;
        }else{
            return false;
            }
        }
        return true;
    }

void replace(string text, bool sign, int start, int end) {
    if(sign){
        for(int k = start; k < end; k++){
            text[k] = 'x'; // replace with x
        }
    }
}


