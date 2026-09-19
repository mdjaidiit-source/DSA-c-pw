class Solution {
public:
    bool isPalindrome(int n) {
        
        // Negative numbers OR numbers ending with 0 (except 0)
        if (n < 0 || (n % 10 == 0 && n != 0))
            return false;

        int reversedHalf = 0;

        // Reverse only half of the number
        while (n > reversedHalf) {
            reversedHalf = reversedHalf * 10 + n % 10;
            n = n / 10;
        }

        // For even digits: n == reversedHalf
        // For odd digits: n == reversedHalf / 10
        return (n == reversedHalf || n == reversedHalf / 10);
    }
};