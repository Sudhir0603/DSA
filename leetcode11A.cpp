/*
leetcode DSA Problem: //Brute Force Approach
11. Container With Most Water

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104
*/
#include<vector>

#include<iostream>
#include<algorithm>
using namespace std;
class Solution {                         //Brute Force Approach
public:
    int maxArea(vector<int>& height) {
        int maxW=0;                        //storing max water
        int n=height.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int w =j-i;                          //find width
                int ht=min(height[j],height[i]);        //find height
                int tw=w*ht;                         //find total water
                maxW=max(maxW,tw);
            }
        }
        return maxW;                         //return max amount of water 
    }
};

int main()
{
    vector <int> height={1,8,6,2,5,4,8,3,7};
Solution sol;
    cout <<" maximum amount of water a container can store:\t"<< sol.maxArea(height);
}