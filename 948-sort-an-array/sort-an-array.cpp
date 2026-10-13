class Solution {
public:
void merge(vector<int>& a, vector<int>& b, vector<int>& c){
    int i = 0, j = 0, k = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] > b[j]) c[k++] = b[j++];
        else c[k++] = a[i++];
    }
    while(i < a.size()) c[k++] = a[i++];
    while(j < b.size()) c[k++] = b[j++];
}




void mergeSort(vector<int>& nums){
    int n = nums.size();
    if(n==1) return; // 1 sized array already sorted
    vector<int> a(n/2);
    vector<int> b(n-n/2);
    int idx = 0; // nums ke elements ke liye
    for(int i=0;i<n/2;i++){ // a ko bharo
        a[i] = nums[idx++];
    }
    for(int i=0;i<n-n/2;i++){ // b ko bharo
        b[i] = nums[idx++];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,nums);
}



    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums);
        return nums;
    }
};