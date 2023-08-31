#include <iostream>
using namespace std;
int main(){
int secno= 7;
int guess;
int guesscount=0;
int guesslimit=3;
bool outofGuesses = false;


while(guess != secno && !outofGuesses){
    if (guesscount<guesslimit){

    
    cout<< "Enter Guess: ";
    cin>> guess;
    guesscount++;}
    else {outofGuesses=true;
    }

}
if (outofGuesses
){cout<<"You lose";}
else{
cout<< "You win!";}
return 0;
}