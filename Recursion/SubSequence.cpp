#include<iostream>
using namespace std;

void printSub(string s,string out,int i){
    if(i>=s.length()){
        cout<<"->"<<out<<endl;
        return;
    }
    char ch = s[i];
    out.push_back(ch);
    printSub(s,out,i+1);
    out.pop_back();
    printSub(s,out,i+1);


}
int main(){
    string sc="abc";
    string out="";
    printSub(sc,out,0);
}