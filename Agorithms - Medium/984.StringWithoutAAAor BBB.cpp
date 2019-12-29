/*
 * 984. String Without AAA or BBB
 * Author: Tomiris
 * Date:2019-12-28
 */

 class Solution {
public:
    string strWithout3a3b(int A, int B) {
       string answer;
        while (answer != " "){

            if (A == B) {
                int i = 0;
                while (i < A) {
                    answer += "ab";
                    i++;
                }
                break;
            }

            if (A+B <3) {
                while  ( A-- > 0 ) answer += 'a';
                while  ( B-- > 0 ) answer += 'b';
                break;
            }

            if ( A > B ) {
                answer += "aab";
                A -= 2;
                B--;
                continue;
            }

            if (B > A ){
                answer += "bba";
                B-=2;
                A--;
                continue;
            }
        }
        return answer;
    }
};
