#include<iostream>
using namespace std;
int main(){
        int x=24;
        int s=0;
        int e=x;
        long long int ans=-1;
        while(s<=e){
            long long int mid=s+(e-s)/2;
            if(mid*mid==x){
                return mid;
            }else if(mid*mid>x){
                e=mid-1;
            }else{
                ans=mid;
                s=mid+1;
            }
        }
        cout<<"Square root : "<<ans;
    return 0;
}