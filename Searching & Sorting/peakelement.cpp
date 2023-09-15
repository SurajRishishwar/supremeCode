#include<iostream>
using namespace std;

int peakelement(int arr[4],int size){
    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }else{
            ans=mid+1;
            end=mid-1;
        }
    }
    return ans;
}

int main(){
    int arr[4]={0,1,12,0};
    int size=4;
    cout<<"Element is at "<<peakelement(arr,size)<<" position";

    return 0;
}