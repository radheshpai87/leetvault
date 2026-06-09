class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int original = x;
        while(x > 0){
            int d = x%10;
            rev = rev * 10 + d;
            x /= 10;
        }
        return (original == rev );
    }
};