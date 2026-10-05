class Solution {
public:
//Recursion
    int binary(int l , int h , int target , vector<int>& nums){
        if( l > h) return -1;
        int mid = l + ( h - l)/2;
        if(target > nums[mid]) return binary(mid+1,h,target,nums);
        else if(target<nums[mid]) return binary(l,mid-1,target,nums);
        else {
            return mid;
        }
    }
    int search(vector<int>& nums, int target){
        int n = nums.size();
        return binary ( 0 , n-1 , target , nums);

//Iterative Method
        // int n = nums.size();
        // int l = 0 , h = n-1;
        // while(l<=h){
        //     int mid = (l+h)/2;
        
        //     if(nums[mid]>target) h= mid - 1;
        //     else if (nums[mid]<target) l = mid+ 1;
        //     else return mid;
        // }
        // return -1;   
    } 
};