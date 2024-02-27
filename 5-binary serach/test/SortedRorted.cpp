#include<iostream>
using namespace std;
class Solution {
public:
    int findpivot(int  nums[]){
        int s=0,e=-1;
        int mid=s+(e-s)/2;
        while(s<e){
            if(nums[mid]>=nums[0]){
                s=mid+1;
            }
            else{
                e=mid;
            }
            mid=s+(e-s)/2;
        }
        return s;
    }
    int BinarySearch(int nums[], int s, int e,int k){
    int mid = s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        
        if(nums[mid]==k){
            ans=mid;
        }
        else if(nums[mid]>k){
            e=mid-1;
        }
        else if(nums[mid]<k){
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    
    return ans;
}
int search(int nums[], int target) {
        
        int pivot=findpivot(nums);
        int e=-1;
        if(target>=nums[pivot] && target<=nums[e]){
            return BinarySearch(nums,pivot,e,target);
        }
        else{
            return BinarySearch(nums,0,pivot-1,target);
        }
        
        return -1;
    }
}; 

int main() {
    


    return 0;
}