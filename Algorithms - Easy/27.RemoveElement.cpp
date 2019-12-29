/*
 * 27. Remove Element
 * Author: Tomiris
 * Date:2019-12-29
 */

 class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        int n = nums.size();
        while (i < n) {
            if (nums[i] == val) {
                nums.at(i) = nums.at(n-1);
                n--;
            } else {
                i++;
            }
        }
    return n;
}
};
