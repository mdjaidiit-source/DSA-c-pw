class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        vector<int> ans(2);
        int i = 0 , j = n-1;
        while (i<n){
            if(numbers[i]+numbers[j] < target ) i++;
            else if ( numbers[i]+numbers[j] > target ) j--;
            else{
                ans[0]=i+1;
                ans[1]=j+1;
                break;
            }
        }
        return ans;


    }
};