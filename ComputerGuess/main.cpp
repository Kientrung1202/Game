#include<iostream>
#include<cstdlib>
using namespace std;
int selectNumber(int , int );
char askHuman();

int main(){
    cout<<"We will start to play game guess it. I guess !"<<endl;
    askHuman();
    return 0;
}


int selectNumber(int low,int hight){
    return (low+hight)/2;
}

char askHuman(){
    int lowNum=1,highNum=100;
    int comNum;
    char c;
    do{
        comNum=selectNumber(lowNum,highNum);
        cout<<"Is "<<comNum<<" bigger or smaller your number?"<<endl;
        cin>>c;
        if(c=='>'){
            highNum=comNum-1;
        }
        else if(c=='<') lowNum=comNum+1;
        else {
            cout<<"I win :)"<<endl;
        }
    }while(c!='=');
}