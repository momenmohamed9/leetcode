class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;  
        long long reversed = 0, original = x;
        while (x > 0) {
            int digit = x % 10;           
            reversed = reversed * 10 + digit; 
            x /= 10;                       
        }
        return reversed == original;
    }
};