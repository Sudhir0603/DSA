/*
509. Fibonacci Number


The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

 

Example 1:

Input: n = 2
Output: 1
Explanation: F(2) = F(1) + F(0) = 1 + 0 = 1.
Example 2:

Input: n = 3
Output: 2
Explanation: F(3) = F(2) + F(1) = 1 + 1 = 2.
Example 3:

Input: n = 4
Output: 3
Explanation: F(4) = F(3) + F(2) = 2 + 1 = 3.
 

Constraints:

0 <= n <= 30
*/





#include<vector>

#include<iostream>
#include<algorithm>
using namespace std;
class Solution {
public:
    int fib(int n) {
       
       int fibo;
        if(n==0)return 0;
        if (n==1)return 1;
     fibo =fib(n-1)+fib(n-2);
return fibo;
    }
};

int main()
{
    Solution sol;
    int n=10;
        int b=3;
            int c=2;
    cout<< "fibo of "<<n <<" : "<< sol.fib(n)<<"\n";
      cout<< "fibo of "<<b <<" : "<< sol.fib(b)<<"\n";
        cout<< "fibo of "<<c <<" : "<< sol.fib(c)<<"\n";
}