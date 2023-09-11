#include<iostream>
using namespace std;
float areaOfCircle(int r){
    return r*r*3.14;
}
int main(){
    float r;
    cin>>r;
    cout<<"Area of Circle is : "<<areaOfCircle(r);
    return 0;

}