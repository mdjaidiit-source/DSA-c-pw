class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        int n = arr.size();
        int i = 0 , h = n-1 ,lb;
        
        while (i<=h){
            int mid = (i+h)/2;
            if ( arr[mid] < target ) i = mid + 1;
            else{
                lb=mid;
                h = mid -1;
            }
        }
        
        
    }
};
