#include<iostream>
using namespace std;

int missingnumber(int arr[6],int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if((arr[mid]-mid)==1){
            start=mid+1;
            
        }else{
            end=mid-1;
            ans=mid;

        }
    }
    if((ans+1)==0)return size+1;
    return ans+1;
}

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=6;
    cout<<"Missing Number : "<<missingnumber(arr,size);
}