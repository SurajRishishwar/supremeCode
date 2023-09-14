#include<iostream>
using namespace std;

void rotatebyk(int arr[7],int size,int k){
    int ans[7];
    for(int i=0;i<size;i++){
        int newindex=(i+k)%size;
        ans[newindex]=arr[i];
    }
    for(int i=0;i<size;i++){
        arr[i]=ans[i];
    }

}
void printarr(int arr[7],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

}
int main(){
    int arr[]={3,6,1,8,45,6,34};
    int size=7;
    int k=7;
    printarr(arr,size);
    rotatebyk(arr,size,k);
    cout<<endl;
    printarr(arr,size);

    return 0;
}