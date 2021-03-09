#include<iostream>
#include<cstdlib>// chua ham rand(), tuy nhiên hàm rand() cần dùng hàm srand(time(0)) để  random lại trong những lần aganin, và chỉ cần chạy srand 1 lần 
#include<ctime>// chua ham time tren

using namespace std;


int generateRandomNumber();
int guessNumber();
void printNumber(int, int );

int main(){
    int numberRandom=generateRandomNumber();
    int nummberGuess;
    do{
        nummberGuess=guessNumber();
        printNumber(nummberGuess,numberRandom);
    }while(nummberGuess!=numberRandom);



    return 0;
}

int generateRandomNumber(){
    return rand() % 100 +1;// so tu 1->100
}
int guessNumber(){
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
