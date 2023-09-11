#include<iostream>
using namespace std;

int printDigits(int n){
    int sum=0;
    while(n){
        int r=n%10;
        sum=sum*10+r;
        n/=10;
    }
    return sum;

}
int main(){
    int n;
    cin>>n;
    cout<<printDigits(printDigits(n));
    return 0;
}