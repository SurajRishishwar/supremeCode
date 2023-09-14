#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printarr(vector<vector<int> >&ans){
    int r=ans.size();
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

void rotateby90(vector<vector<int>>& ans){
    int r=ans.size();
    for(int i=0;i<r;i++){
        for(int j=0;j<i;j++){
            swap(ans[i][j],ans[j][i]);
        }
    }
    for(int i=0;i<r;i++){
        reverse(ans[i].begin(),ans[i].end());
    }

}
int main(){
    vector<vector<int>> ans{
        {1,3,5},
        {4,89,4},
        {34,5,2}
    };

    printarr(ans);
    rotateby90(ans);
    cout<<endl;
    printarr(ans);
    return 0;
}