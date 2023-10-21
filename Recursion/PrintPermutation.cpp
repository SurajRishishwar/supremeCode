#include<iostream>
using namespace std;
void printpermute(string s,int index){
    if(index>=s.length()){
        cout<<s<<endl;
    }
    for(int j=index;j<s.length();j++){
        swap(s[index],s[j]);
        printpermute(s,index+1);
    }
}
int main(){
    string s = "pqr";
    printpermute(s,0);
}