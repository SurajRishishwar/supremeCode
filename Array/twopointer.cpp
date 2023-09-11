#include<iostream>
using namespace std;
bool twopair(int arr[],int size,int target){
    int start=0;
    int stop=size-1;
    while(start<stop){
        if((arr[start]+arr[stop]==target)){
            return true;
        }
        else if((arr[start]+arr[stop])>target){
            stop--;
        }
        else{
            start++;
        }
    }
    
    return false;
}
int main(){
    int arr[5]={2,4,6,8,23};
    int size=5;
    int target=12;
    bool ispresent= twopair(arr,size,target);
    if(ispresent){
        cout<<"Pair Found";
    }else{
        cout<<"Pair Not Found";
    }
    return 0;
}