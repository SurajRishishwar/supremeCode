#include<iostream>
#include<vector>
using namespace std;

bool search(vector<vector<int>>& matrix,int target){
        int row=matrix.size();
        int col=matrix[0].size();
        int n=row*col;
        int s=0;
        int e=n-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            int rowind=mid/col;
            int colind=mid%col;
            int currnumber=matrix[rowind][colind];
            if(currnumber==target){
                return true;
            }else if(target>currnumber){
                s=mid+1;
            }else{
                e=mid-1;
            }
        }
        return false;
        

}

int main(){
        vector<vector<int>> matrix{{1,3,5,7},{10,11,16,20},{23,30,34,60}};
        int target=12;
        if(search(matrix,target)){
            cout<<"Target Found";
        }else{
            cout<<"Not Found";
        }

        
    
    return 0;
}