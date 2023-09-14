#include<iostream>
using namespace std;
int binarysearch(int arr[7],int size,int target){
    int start=0;
    int end=size-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
    }
    return -1;

}
int main(){
    int arr[7]={7,8,23,45,56,58};
    int size=6;
    int target=58;
    int index=binarysearch(arr,size,target);
    if(index==-1){
        cout<<"Target Not Found!!!";
    }else{
        cout<<"Target Found at "<<index+1 <<" Position";
    }
    return 0;
}