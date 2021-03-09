#include<iostream>
#include<cstdlib>
#include<ctime>
// search gg with "C++ random repeat" 
using namespace std;

int generateRandomNumber();
int generateGuessNumber();
void printNumber(int, int );
void guessNumber() ;
bool wantPlayAgain(char);

int main(){
    srand(time(0));// neu dung rand() bat buoc can goi 1 lan srand()
    char answer;
    do{
        guessNumber();
        cout<<"Do you want to play new game, Y or N?"<<endl;
        cin>>answer;
    }while(answer=='Y');
    cout<<"Game Over"<<endl;
    return 0;
}

int generateRandomNumber(){
    return rand()%100+1;
    /*
    còn nhưngx cách khác không cần srand(time(0));
    */
}

int generateGuessNumber(){
     int number;
    cout<<"Enter your number: "<<endl;
    cin>>number;
    return number;
}
void printNumber(int guess,int random){
    if(guess>random) {
        cout<<"You guessed it too big. Again!"<<endl;
    }
    else if(guess<random){
        cout<<"You guess it too small.Again!"<<endl;
    }
    else {
        cout<<"You are so intelligent. That 's right!"<<endl;
    }
}
void guessNumber() {
    int numberRandom=generateRandomNumber();
    int nummberGuess;
    do{
        nummberGuess=generateGuessNumber();
        printNumber(nummberGuess,numberRandom);
    }while(nummberGuess!=numberRandom);
}