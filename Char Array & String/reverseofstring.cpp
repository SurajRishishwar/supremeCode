#include<iostream>
using namespace std;
void reversestring(char a[],int len){
    int i=0;
    int j=len-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    return;
}
int getlen(char a[],int size){
    int lnt=0;
    while(a[lnt]!='\0'){
        lnt++;

    }
    return lnt;

}
int main(){
    char a[120];
    cin.getline(a,120);
    int lengthofstring=getlen(a,120);

    reversestring(a,lengthofstring);
    cout<<a;
    return 0;
}