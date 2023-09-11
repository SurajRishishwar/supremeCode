#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={3,8,2,7,5};
    int size=5;
    int target=5;
    bool ispresent=linearsearch(arr,size,target);
    if(ispresent){
        cout<<"Target Killed";
    }else{
        cout<<"OOps!! We lost";
    }

    return 0;
}