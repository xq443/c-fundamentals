#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int num;
    int leftBound = 1, rightBound = 100;

    cout<<"I thought of a number between 1 and 100 ! Try to guess it."<<endl;

    srand(time(NULL));
    int target = rand() % 100 + 1;
        
    for(int guessCounter = 1; guessCounter < 6; guessCounter++){
        cout<<"Range: ["<<leftBound<<", "<<rightBound<<"], Number of guesses left: "<<5 - guessCounter + 1<<endl;
        cout<<"Your guess: ";
        cin>>num;

        if(guessCounter == 5 && num!= target) {
            cout<<"Out of guesses! My number is "<<target;
            break;
        }
        if(num > target) {
            cout<<"Wrong! My number is smaller.\n"<<endl;
            rightBound = num - 1;
            }
        else if(num < target) {
            cout<<"Wrong! My number is larger.\n"<<endl;
            leftBound = num + 1;
            }
        else {
            cout<<"Congrates! You guessed my number in "<<guessCounter<<" guesses.";
            break;
        }
    }
    return 0;
}