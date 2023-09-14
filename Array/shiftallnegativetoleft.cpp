#include<iostream>
using namespace std;

void shiftAllnegativeLeft(int arr[7],int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        }
    
    }
    return;
}

void printArr(int arr[7],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={3,8,2,9,4,5,23};
    int size=7;
    printArr(arr,size);
    shiftAllnegativeLeft(arr,size);
    printArr(arr,size);
    return 0;
}