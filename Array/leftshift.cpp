#include<iostream>
using namespace std;

void leftshift(int arr[],int size){
    int temp=arr[0];
    for(int i=0;i<size-1;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    return;

}

int main(){
    int arr[5]={2,5,5,6,7};
    int size=5;
    leftshift(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}