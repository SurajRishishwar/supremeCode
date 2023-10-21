#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int srx,int sry,int newx,int newy,int maze[][4],int x,int y,vector<vector<bool>> &state){
    if(
        (newx>=0 && newx<x) &&
        (newy>=0 && newy<y) &&
        maze[newx][newy]==1 &&
        state[newx][newy]==false
    ){
        return true;
        cout<<"safe check";
    }else{
        return false;
    }
}
void findPath(int maze[][4],int x,int y,int srx,int sry,string &s,vector<vector<bool>> &state){
    if((srx == x-1) && (sry == y-1)){
        cout<<s<<endl;
        return;
    }
    int newx=srx-1;
    int newy=sry;
    if(isSafe(srx,sry,newx,newy,maze,x,y,state)){
        state[newx][newy]=true;
        s.push_back('U');
        findPath(maze,x,y,newx,newy,s,state);
        s.pop_back();
        state[newx][newy]=false;
    }
    newx=srx+1;
    newy=sry;
    if(isSafe(srx,sry,newx,newy,maze,x,y,state)){
        state[newx][newy]=true;
        s.push_back('D');
        findPath(maze,x,y,newx,newy,s,state);
        s.pop_back();
        state[newx][newy]=false;
    }
    newx=srx;
    newy=sry-1;
    if(isSafe(srx,sry,newx,newy,maze,x,y,state)){
        state[newx][newy]=true;
        s.push_back('L');
        findPath(maze,x,y,newx,newy,s,state);
        s.pop_back();
        state[newx][newy]=false;
    }
    newx=srx;
    newy=sry+1;
    if(isSafe(srx,sry,newx,newy,maze,x,y,state)){
        state[newx][newy]=true;
        s.push_back('R');
        findPath(maze,x,y,newx,newy,s,state);
        s.pop_back();
        state[newx][newy]=false;
    }

}
int main(){
    int maze[3][4]={
        {1,0,0,0},
        {1,1,0,0},
        {1,1,1,1}
    };
    int x=3;
    int y=4;
    int srx=0;
    int sry=0;
    string s="";
    vector<vector<bool>>state(x,vector<bool>(y,false));
    if(maze[0][0]==0){
        cout<<"No Path Exist!!!";
    }else{
        state[srx][sry]=true;
        findPath(maze,x,y,srx,sry,s,state);
    }
    return 0;

    
}