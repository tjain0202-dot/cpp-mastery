// Problem: LeetCode #1 - Two Sum
// Approach: Optimized using an Unordered Hash Map
// Performance: Beats 90%+ of C++ submissions(2ms)
// Time Complexity: O(N) - Single Pass

#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seenNumbers;
        for (int i = 0; i < nums.size(); i++) {
            int currentNum = nums[i];
            int requiredPartner = target - currentNum;
            if (seenNumbers.find(requiredPartner) != seenNumbers.end()) {
                return {seenNumbers[requiredPartner], i};
            }
            seenNumbers[currentNum] = i;
        }
        return {};
    }
};
