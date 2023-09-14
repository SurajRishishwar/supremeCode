#include<iostream>
using namespace std;

// void sortfun(int arr[7],int size){
//     int zero=0,one=0,two=0;
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){zero++;}
//         else if(arr[i]==1){one++;}
//         else{two++;}
//     }
//     int k=0;
//     while(zero>0){
//         arr[k]=0;
//         k++;
//         zero--;
//     }
//     while(one>0){
//         arr[k]=1;
//         k++;
//         one--;
//     }
//     while(two>0){
//         arr[k]=2;
//         k++;
//         two--;
//     }
// }

void sortfun2(int arr[7],int size){

        int index = 0;
        int left = 0;
        int right = size-1;

        while(index <= right) {

            if(arr[index] == 0) {
                swap(arr[index], arr[left]);
                left++;
                index++;
            }
            else if(arr[index] == 2) {
                swap(arr[index], arr[right]);
                right--;
                //catch -> no need of index++
                //index++
            }
            else {
                index++;
            }


        }
   
    // for(int i =0;i<size;){
    //     if(arr[i]==0){
    //         swap(arr[i],arr[left]);
    //         left++;
    //         i++;
    //     }
    //     else if(arr[i]==1){
    //         i++;
    //     }
    //     else{
    //         swap(arr[i],arr[right]);
    //         right--;
    //     }
    // }
}


void printArr(int arr[7],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={0,2,0,1,2,1,0};
    int size=7;
    printArr(arr,size);
    // sortfun(arr,size);
    sortfun2(arr,size);
    cout<<endl;
    printArr(arr,size);
    return 0;
}