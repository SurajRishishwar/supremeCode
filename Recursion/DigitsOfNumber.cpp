#include<iostream>
using namespace std;

void DigitsAre(int n){
    if(n==0){
        return;
    }
    int d = n%10;
    DigitsAre(n/10);
    cout<<d<<endl;
}

int main(){

    int n = 344242455;
    DigitsAre(n);
}