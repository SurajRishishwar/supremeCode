#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int row=0;row<n;row=row+1){
        for(int col=row+1;col<n+1;col=col+1){
            if(row==0){
                cout<<col<<" ";
            }else{
                if(col==row+1||col==n){
                    cout<<col<<" ";
                }
                else{
                    cout<<"  "; 
                }
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}