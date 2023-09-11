#include<iostream>
using namespace std;

void rightshift(int arr[],int size){
    int temp=arr[size-1];
    for(int i=size-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
    return;
}

int main(){
    int arr[7]={2,6,1,3,9,5,7};
    int size=7;
    rightshift(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}