class Solution {
public:
    bool notValid(char ch){
        if(ch>=65 && ch<=90) return false;
        else if(ch>=97 && ch<=122) return false;
        else if(ch>=48 && ch<=57) return false;
        else return true;
    }    
    bool isPalindrome(string s) {
        int n = s.size();
        int lo = 0 , hi = n-1;

        if(n==1) return true;
        else{
            while(lo<hi){
                char x = s[lo] , y = s[hi];
                if(x>=65 && x<=90) x+=32;
                if(y>=65 && y<=90) y+=32;
                if(notValid(x)) lo++;
                else if(notValid(y)) hi--;
                else {
                    if(x != y) return false;
                    lo++;
                    hi--;
                }
            }
            return true;
        }
        return true;
        
    }
};