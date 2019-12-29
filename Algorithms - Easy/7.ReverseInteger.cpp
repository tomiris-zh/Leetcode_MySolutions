/*
 * 7. Reverse Integer
 * Author: Tomiris
 * Date:2019-12-28
 */

 class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while (x != 0) {
            int temp = x % 10;
            x = x/10;
            if (rev > INT_MAX/10 || rev < INT_MIN/10) {return 0;}
            rev = rev * 10 + temp;
        }
        return rev;
    }
};
