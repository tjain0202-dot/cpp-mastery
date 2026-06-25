// NOTE: The logic and code implementation were written by me. 
// I used AI to generate the detailed explanatory comments to help structure my learning log.
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // SAFETY GUARD: If the array is empty, there are 0 unique items.
        if (nums.empty()) return 0;
        
        // --- OUR APPROACH: THE ASSISTANT & THE SCANNER (Two-Pointer Method) ---
        // INSTEAD OF: Using a nested loop and deleting items (which crashes memory and runs slow)
        // WE DO THIS: We use two simple index counters to overwrite duplicates in place.
        
        // 1. The 'Assistant' pointer (i) starts at index 0.
        // It stays put and marks the spot of the last confirmed UNIQUE number.
        int i = 0; 
        
        // 2. The 'Scanner' pointer (j) starts at index 1 and walks forward.
        // It scans through every single number in the list one by one.
        for (int j = 1; j < nums.size(); j++) {
            
            // If the Scanner finds a number that is DIFFERENT from the Assistant's number...
            if (nums[j] != nums[i]) {
                
                i++;                // Move the Assistant forward 1 step to a fresh slot
                nums[i] = nums[j];  // Overwrite that spot with the new unique number
            }
            // Note: If nums[j] == nums[i], it's a duplicate! 
            // The loop simply skips it, leaving it behind to be overwritten later.
        }
        
        // 3. Return the total count of unique numbers.
        // Since indexes start at 0, the count is always the last index (i) + 1.
        return i + 1; 
    }
};
