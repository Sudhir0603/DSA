/*
7. Reverse Integer


Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21
 

Constraints:

-231 <= x <= 231 - 1
*/


#include <iostream>
#include <climits>  
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int ans = 0;

        while (x != 0) {
            int rem = x % 10;

            // Pre-check to avoid 32-bit signed int overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && rem > 7)) return 0;
            if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && rem < -8)) return 0;

            ans = ans * 10 + rem;
            x /= 10;
        }

        return ans;
    }
};


int main() {
    Solution sol;

    int x1 = 123;
    int x2 = -123;
    int x3 = 120;
    int x4 = 1534236469;  

    cout << "Reverse of " << x1 << " is " << sol.reverse(x1) << endl;
    cout << "Reverse of " << x2 << " is " << sol.reverse(x2) << endl;
    cout << "Reverse of " << x3 << " is " << sol.reverse(x3) << endl;
    cout << "Reverse of " << x4 << " is " << sol.reverse(x4) << endl;

    return 0;
}
