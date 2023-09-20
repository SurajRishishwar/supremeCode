#include<iostream>
#include<vector>
using namespace std;
int pivot(vector<int>& nums){
        int s=0;
        int e=nums.size()-1;
        while(s<=e){
            int mid =s+(e-s)/2;
            if(s==e){
                return s;
            }
            if((mid-1 >= 0) && (nums[mid]<nums[mid-1])){
                return mid-1;
            }else if((mid+1 < nums.size()) && (nums[mid]>nums[mid+1])){
                return mid;
            }else if(nums[mid]<nums[s]){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return -1;
}
int binsearch(vector<int>& nums,int s,int e,int target){
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target){
                return mid;
            }else if(nums[mid]>target){
                e=mid-1;
            }else{
                s=mid+1;
            }
        }
        return -1;
}
        
    
int main(){
        vector<int> nums{8,10,12,2,4,6};
        int target=6;
        int p=pivot(nums);
        int s=0;
        int index = -1;
        int e=nums.size()-1;
        if(target>=nums[s] && target<=nums[p]){
            index=binsearch(nums,s,p,target);
        }else{
            index=binsearch(nums,p+1,e,target);
        }
        cout<<"index is : "<<index;

    return 0;
}