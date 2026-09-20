class Solution {
  public:
    void sortInWave(vector<int>& arr) {
        // int i = 0 , j=arr.size()-1;
        
        for(int i = 0; i<arr.size();i+=2){
            if(i!=arr.size()-1 ) swap(arr[i],arr[i+1]); 
            
        }
    }
};