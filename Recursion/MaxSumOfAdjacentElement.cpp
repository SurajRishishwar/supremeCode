#include<iostream>
using namespace std;
int FunforMaxSum(int att[],int n,int index){
    if(index>=n){
        return 0;
    }
    int way1=att[index]+FunforMaxSum(att,n,index+2);
    int way2=0+FunforMaxSum(att,n,index+1);
    int final=max(way1,way2);
    return final;

}
int main(){
    int att[]={2,5,4,5,8,34,6,8,1};
    int n = 9;
    int maxSum=FunforMaxSum(att,n,0);
    cout<<maxSum;
}