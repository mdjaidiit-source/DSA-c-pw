class Solution {
public:
    bool isAnagram(string s, string t) {
        int ns =s.size();
        int nt =t.size();
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        if(ns!=nt) return false;
        else{
            int i = 0 ;
            while(i<=ns){
                if(s[i]==t[i]) i++;
                else return false;
            }
            return true;

        }

        return false;

        
        
    }
};