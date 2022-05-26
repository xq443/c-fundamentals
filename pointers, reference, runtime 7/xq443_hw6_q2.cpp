#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str);

int main() {
    string word;
    cout<<"Please enter a word: ";
    cin>>word;
    bool res = isPalindrome(word);
    if(res) {
        cout<<word<<" is a palindrome";
    }else {
        cout<<word<<" is not a palindrome";
    }
    return 0;
}

bool isPalindrome(string str){
    bool flag = true;
    int length = str.length();
    for(int i = 0; i < length; i++) {
        if(str[i] != str[length - 1 - i]){
            flag = false;
            break;
        }  
    }
    return flag;
}