#include<iostream>
using namespace std;

int diagonalSum(int arr[3][3]){
    int sum=0;
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         if(i==j){
    //             sum+=arr[i][j];
    //         }
    //     }
    // }

    for(int i=0;i<3;i++){
        sum+=arr[i][i];
    }
    return sum;
}

int main(){
    int arr[3][3]={
        {1,3,5},
        {4,89,4},
        {34,5,2}
    };
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Diagonal Sum is : "<<diagonalSum(arr);
    return 0;
}