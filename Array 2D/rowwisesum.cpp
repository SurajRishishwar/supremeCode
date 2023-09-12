#include<iostream>
using namespace std;

void getRowSum(int arr[3][3]){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}


int main(){
    int arr[3][3]={
        {1,2,3},
        {5,8,3},
        {2,6,9},
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    getRowSum(arr);

    return 0;
}