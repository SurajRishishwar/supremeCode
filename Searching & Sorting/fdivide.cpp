#include<iostream>
using namespace std;

int getdivison(int dd,int ds){
    int s=0;
    int e=dd;
    int ans=-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(mid*ds==dd){
            return mid;
        }else if(mid*ds>dd){
            e=mid-1;
        }else{
            ans=mid;
            s=mid+1;
        }
    }
    return ans;
}
int main(){
    int dividend=-25;
    int divisor=7;
    int ans=getdivison(25,7);
    if((dividend<0 && divisor>0)||(dividend>0 && divisor<0)){
        ans=0-ans;
    }
    cout<<"Quotient is : "<<ans<<endl;
    return 0;
}