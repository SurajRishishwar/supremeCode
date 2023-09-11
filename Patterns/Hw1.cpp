#include<iostream>
using namespace std;
int main()
{
    
    int n = 6;
    for(int row=0;row<n;row=row+1){
        char ch;
        for(int col=0;col<row+1;col=col+1){
            ch= col+1+'A'-1;
            cout<<ch;
        }
        for(char revcol=ch;revcol>'A';){
            revcol=revcol-1;
            cout<<revcol;        
        }
        cout<<endl;
    }
    return 0;
}
