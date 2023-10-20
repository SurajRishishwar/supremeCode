#include<iostream>
using namespace std;
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int i=s-1;
    int j=s;
    int pivot = e;
    while (j<pivot){
        if(arr[j]<arr[pivot]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    i++;
    swap(arr[i],arr[pivot]);
    quicksort(arr,s,i-1);
    quicksort(arr,i+1,e);

    
}

int main(){
    int arr[]={4,4,2,5,8,9};
    int size = 6;
    quicksort(arr,0,size-1);
    for(int i:arr){
        cout<<i<<" ";
    }
}