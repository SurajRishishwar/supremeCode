#include<iostream>
#include<vector>
using namespace std;
void evenNumbers(int arr[],int size,int index,vector<int> &brr){
    if(index>=size){
        return;
    }
    if(arr[index]%2==0){
        brr.push_back(arr[index]);
    }
    evenNumbers(arr,size,index+1,brr);
}
int main(){
    int arr[7]={2,4,3,3,3,3,3};
    int size=7;
    vector<int >brr;
    evenNumbers(arr,size,0,brr);

    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }
}