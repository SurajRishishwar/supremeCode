#include<iostream>
using namespace std;
int maxFun(int Num1,int Num2,int Num3){
    if(Num1>Num2 && Num1>Num3){
        return Num1;
    }
    else if(Num2>Num1 && Num2>Num3){
        return Num2;
    }
    else{
        return Num3;
    }
}
int main(){
    cout<<maxFun(58,7,34);
    return 0;
}