class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n = nums.size();
        int countP = 0 ;
        int countN = 0 ;
        for( int i = 0 ; i < n ; i++){
            if(nums[i]>0){
                countP++;
            }
            else if (nums[i] < 0){
                countN++;
            }
        }
        int max;
        if(countP>countN) max=countP;
        else max= countN; 
        return max;
        
    }
};