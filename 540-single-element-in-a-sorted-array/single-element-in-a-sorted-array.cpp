class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        if(nums[0]!= nums[1]) return nums[0];
        if(nums[n-1]!=nums[n-2]) return nums[n-1];
        int lo = 0 , hi = n-1;
        while ( lo <= hi ){
            int mid = lo + ( hi - lo )/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];
            int f = mid , s = mid;
            if(nums[mid]==nums[mid+1]){
                s =mid+1;
            }
            else if(nums[mid]==nums[mid-1]){
                f= mid-1;
            }
            int leftLength = f-lo;
            if(leftLength%2==1) hi = f-1;
            else lo = s+1;

        }
        return 2
;    } 
    
};