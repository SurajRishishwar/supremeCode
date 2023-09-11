#include<iostream>
using namespace std;
int sumOfN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            sum+=i;
        }
    }
    return sum;
}
int main(){
    cout<<sumOfN(4);
    return 0;
}
