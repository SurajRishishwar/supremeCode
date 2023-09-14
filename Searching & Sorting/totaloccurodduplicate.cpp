#include<iostream>
using namespace std;

int firstoccur(int arr[6],int size,int target){

    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;

        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }

    }
    return ans;

}

int lastoccur(int arr[6],int size,int target){

    int start=0;
    int end=size-1;
    int ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;

        }else if(arr[mid]<target){
            start=mid+1;
        }else{
            end=mid-1;
        }

    }
    return ans;

}


int main(){
    int arr[6]={7,8,8,8,56,56};
    int size=6;
    int target=56;
    int count=lastoccur(arr,size,target)-firstoccur(arr,size,target);
    cout<<"Total count is "<<count+1;

    return 0;
}