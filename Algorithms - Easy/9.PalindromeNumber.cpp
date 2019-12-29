/*
 * 9. Palindrome Number
 * Author: Tomiris
 * Date:2019-12-28
 */

 class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0 || x%10 == 0 && x != 0) {
            return false;
        }
        int initial = x;
        int reverted = 0;
        while (x>0) {
            if (reverted > INT_MAX/10 || reverted < INT_MIN/10) return false;
            reverted = x%10 + reverted*10;
            x=x/10;
        }
        if (reverted == initial) return true;

        return false;
    }
};
