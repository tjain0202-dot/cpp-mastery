// NOTE: The logic and code implementation were written by me. 
// I used AI to generate the detailed explanatory comments to help structure my learning log.
#include <iostream>
#include <vector>
#include <algorithm> // Kept for consistency, though we don't need sort() anymore!
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // === THREE-POINTER OPTIMAL APPROACH ===
        // Time Complexity: O(m + n) -> Super fast, loops through data exactly once!
        // Space Complexity: O(1) -> Uses zero extra memory spaces.
        
        int i = m - 1;     // Pointer 1: Points to the last actual number in nums1
        int j = n - 1;     // Pointer 2: Points to the last number in nums2
        int k = m + n - 1; // Pointer 3: Points to the very last empty slot (0) in nums1

        // Loop as long as BOTH arrays have elements left to compare
        while (i >= 0 && j >= 0) {
            // Compare the numbers from the back (largest to smallest)
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i]; // Put the bigger number at the very back slot
                i--;                 // Move nums1 pointer down
            } else {
                nums1[k] = nums2[j]; // Put nums2's number at the back slot
                j--;                 // Move nums2 pointer down
            }
            k--; // Move the empty slot tracker down
        }

        // === EDGE CASE CRITICAL CLEANUP ===
        // If nums1 pointer (i) finishes first, elements might still be left in nums2.
        // We must dump them into the remaining front slots of nums1.
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
        
        // NOTE: If nums2 pointer (j) finishes first, we don't need another loop!
        // The remaining numbers in nums1 are already in their correct sorted positions.
    }
};

int main() {
    Solution solver;

    // Real LeetCode test case setup
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // Has 3 actual elements + 3 buffer spaces
    int m = 3;
    vector<int> nums2 = {2, 5, 6};          // Has 3 elements
    int n = 3;

    cout << "Before merge: ";
    for (int x : nums1) cout << x << " ";
    cout << "\n";

    // Run the optimal merge algorithm
    solver.merge(nums1, m, nums2, n);

    cout << "After optimal merge: ";
    for (int x : nums1) cout << x << " "; // OUTPUT: 1 2 2 3 5 6
    cout << "\n";

    return 0;
}
