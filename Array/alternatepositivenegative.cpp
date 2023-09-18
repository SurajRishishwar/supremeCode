#include<iostream>
#include<vector>
using namespace std;
void printt(vector<int> &ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return;
}

void alternatepositivenegative(vector<int>& ans){
    int even=0;
    int odd=1;
    vector<int> arr(ans.size());
    for(int i=0;i<ans.size();i++){
        if(ans[i]>0){
            arr[even]=ans[i];
            even+=2;
        }else{
            arr[odd]=ans[i];
            odd+=2;
        }
    }
    ans=arr;

}
int main(){
    vector<int> ans{1,6,-4,-3,-7,9};
    printt(ans);
    alternatepositivenegative(ans);
    cout<<endl;
    printt(ans);
    return 0;
}