class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns =s.size();
        int nt =t.size();
        if(ns!=nt) return false;
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s==t) return true;
        else return false;

        

       

        
        
    }
};