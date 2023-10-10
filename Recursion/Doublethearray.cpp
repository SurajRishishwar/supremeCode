#include<iostream>
using namespace std;

void doublethearr(int arr[],int size,int index){

    if(size<=index){
        return;
    }
    arr[index]=arr[index]*2;
    doublethearr(arr,size,index+1);


}
int main(){

    int arr[5]= {2,3,4,5,6};
    int size=5;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    doublethearr(arr,size,0);
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}