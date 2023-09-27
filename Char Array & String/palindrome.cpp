#include<iostream>
using namespace std;
int getlen(char a[],int size){
    int lnt=0;
    while(a[lnt]!='\0'){
        lnt++;

    }
    return lnt;

}
bool validpalindrome(char ch[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        if(ch[i]==ch[j]){
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}
int main(){
    char ch[100];
    cin.getline(ch,100);
    int lenofstring = getlen(ch,100);
    bool validpl= validpalindrome(ch,lenofstring);
    if(validpl){
        cout<<"Valid Palindrome";
    }
    else{
        cout<<"Inavlid !!! Something went Wrong";
    }
}
