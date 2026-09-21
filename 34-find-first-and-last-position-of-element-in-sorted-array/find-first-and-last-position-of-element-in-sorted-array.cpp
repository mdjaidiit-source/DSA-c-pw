class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans(2,-1);
        int n = nums.size();
        int i = 0 , h = n-1;
        while(i <= h ){
            int mid= (i+h)/2;
            if(nums[mid]<target ) i = mid + 1;
            else if(nums[mid] > target ) h =mid-1;
            else{
                ans[0]=mid;
                h =mid-1;
            }

        }
        i = 0;
        h = n-1;
        while(i <= h ){
            int mid= (i+h)/2;
            if(nums[mid]<target ) i = mid +1;
            else if(nums[mid] > target ) h =mid-1;
            else{
                ans[1]=mid;
                i = mid+1;
            }

        }
        return ans;

        
    }
};