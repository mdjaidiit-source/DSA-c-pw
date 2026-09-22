class Solution {
  public:
   int upperBound(vector<int>& arr, int target) {
       int low = 0, high = arr.size();

       while (low < high) {
           int mid = ( low + high ) / 2;

           if (arr[mid] <= target)
               low = mid + 1;
           else
               high = mid;
       }

       return low;
   }
};
