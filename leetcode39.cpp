/*
39. Combination Sum


Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

 

Example 1:

Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.
Example 2:

Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]
Example 3:

Input: candidates = [2], target = 1
Output: []
 

Constraints:

1 <= candidates.length <= 30
2 <= candidates[i] <= 40
All elements of candidates are distinct.
1 <= target <= 40
*/

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void backtrack(vector<int>& candidates, int target, vector<vector<int>>& result, vector<int>& current, int index) {
        if (target == 0) {
            result.push_back(current);
            return;
        }
        if (target < 0 || index == candidates.size()) {
            return;
        }

        // Include the current number
        current.push_back(candidates[index]);
        backtrack(candidates, target - candidates[index], result, current, index); // reuse the number
        current.pop_back(); // backtrack

        // Exclude the current number and move to next
        backtrack(candidates, target, result, current, index + 1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> current;
        backtrack(candidates, target, result, current, 0);
        return result;
    }
};

// Helper to print the result
void printCombinations(const vector<vector<int>>& combinations) {
    for (const auto& combo : combinations) {
        cout << "[ ";
        for (int num : combo) {
            cout << num << " ";
        }
        cout << "]\n";
    }
}

int main() {
    Solution sol;

    vector<int> candidates1 = {2, 3, 6, 7};
    int target1 = 7;

    vector<int> candidates2 = {2, 3, 5};
    int target2 = 8;

    cout << "Combinations for target = 7:\n";
    vector<vector<int>> result1 = sol.combinationSum(candidates1, target1);
    printCombinations(result1);

    cout << "\nCombinations for target = 8:\n";
    vector<vector<int>> result2 = sol.combinationSum(candidates2, target2);
    printCombinations(result2);

    return 0;
}
