// NOTE: The logic and code implementation were written by me. 
// I used AI to generate the detailed explanatory comments to help structure my learning log.
#include <iostream>
#include <vector>
#include <algorithm> // Required for swap()
using namespace std;
class Solution {
public:
    // NOTICE: We use 'vector<int>& a' (Pass-by-Reference).
    // This gives us the direct sticky-note link to the original data so we can change it instantly.
    void moveZeroes(vector<int>& a) {
        int b = 0; // Tracks where the next non-zero number belongs
        // 'c' loops through every single element in the vector
        for (int c = 0; c < a.size(); c++) {
            if (a[c] != 0) {
                // Swap the values at the c and b positions
                swap(a[b], a[c]);
                // Move the b pointer forward to the next slot
                b++;
            }
        }
    }
};
int main() {
    Solution d;
    vector<int> e = {0, 1, 0, 3, 12};
    cout << "Original Array: ";
    for (int x : e) cout << x << " ";
    cout << "\n";
    // Run your solution function
    d.moveZeroes(e);
    cout << "Array After moveZeroes: ";
    for (int x : e) cout << x << " "; // EXPECTED OUTPUT: 1 3 12 0 0
    cout << "\n";
    return 0;
}
