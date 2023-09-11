#include<iostream>
using namespace std;
void extremeprint(int arr[],int size){
    int start=0;
    int stop=size-1;
    while(start<=stop){
        if(start==stop){
            cout<<arr[start]<<" ";
        }else{
             cout<<arr[start]<<" ";
             cout<<arr[stop]<<" ";
            
        }
        start++;
        stop--;
       
    }
}
int main(){
    int arr[6]={3,6,7,8,3,4};
    int size=6;
    extremeprint(arr,size);
    return 0;

}