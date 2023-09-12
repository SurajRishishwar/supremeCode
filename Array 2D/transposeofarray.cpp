#include<iostream>
using namespace std;

void transposeArray(int arr[3][3]){
    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
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
    transposeArray(arr);
    cout<<"Transpose Done"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}