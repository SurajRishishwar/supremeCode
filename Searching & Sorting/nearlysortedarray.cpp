#include<iostream>
using namespace std;
int search(int arr[],int size,int target){
    int s=0;
    int e=size-1;
    while(s<=e){
        int mid=s+(e-s)/2;
        if(arr[mid]==target){
            return mid;
        }else if(mid+1<size && arr[mid+1]==target){
            return mid+1;
        }else if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }else if(arr[mid]>target){
            e=mid-2;
        }else{
            s=mid+2;
        }
    }
    return -1;
}
int main(){
    int arr[] = {20,10,30,50,40,70,60};
    int target=20;
    int size=7;
    int index=search(arr,size,target);
    if(index==-1){
        cout<<"Element Not Found";
    }else{
        cout<<"Element is at : "<<index;
    }
    return 0;
}