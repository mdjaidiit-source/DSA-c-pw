class Solution {
  public:
    void sortInDesc(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        vector<int> ans;
        for( int i = n-1 ; i>=0 ;i--){
            ans.push_back(arr[i]);
        }
        arr=ans; 
    }
};