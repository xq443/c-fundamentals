#include <iostream>
#include <string>

using namespace std;
string* createWordsArray(string sentence,int& size);
int main() {
    string sentence;
    getline(cin, sentence);
    int outWordsArraySize = 0;

    string * res = createWordsArray(sentence, outWordsArraySize);

    cout<<"[";
    for(int i = 0; i < sentence.length() - 1; i++) {
        cout<<"\""<<res[i]<<"\" , ";
    }
    cout<<"\""<<res[sentence.length() - 1]<<"\"";
    cout<<"]";
    return 0;
}

string* createWordsArray(string sentence,int& size){
    //declare the pointer
    string* word=new string;   
    int start,end,count=0;
    //initialize start to zero and end to first occurence of character space
    start=0;
    end=sentence.find(' ');
    while(end>0 && start<sentence.length()){
    //copy the substring to array
        word[count]=sentence.substr(start,end-start);
        count++;
        
        start=end+1;
    //find the next occurence of character space
        end=sentence.find(' ',start);
    }
    if(start<sentence.length()){
        word[count]=sentence.substr(start,sentence.length()-start);
        count++;
    }
    size=count;
    return word;}