#include<iostream>
#include<string.h>
using namespace std;
int getlen(char a[],int size){
    int lnt=0;
    while(a[lnt]!='\0'){
        lnt++;

    }
    return lnt;

}
int main(){
    char a[100];
    cin.getline(a,100);
    int lenofstring = getlen(a,100);
    cout<<lenofstring;
    return 0;
}