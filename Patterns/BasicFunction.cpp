#include<iostream>
using namespace std;
void getSum(int a, int b,int c){
    int sum=a+b+c;
    cout<<sum;
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    getSum(a,b,c);
    return 0;
}