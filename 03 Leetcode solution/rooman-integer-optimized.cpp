// Problem: LeetCode #13 - Roman to Integer
// Approach: Iterative with Switch Case
// Performance: Beats ~100% of C++ submissions
// Time Complexity: O(N)
#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.size(); i++) {
            int val = 0;
            switch (s[i]) {
                case 'I': val = 1; break;
                case 'V': val = 5; break;
                case 'X': val = 10; break;
                case 'L': val = 50; break;
                case 'C': val = 100; break;
                case 'D': val = 500; break;
                case 'M': val = 1000; break;
            }
            if (i + 1 < s.size()) {
                int nextVal = 0;
                switch (s[i + 1]) {
                    case 'I': nextVal = 1; break;
                    case 'V': nextVal = 5; break;
                    case 'X': nextVal = 10; break;
                    case 'L': nextVal = 50; break;
                    case 'C': nextVal = 100; break;
                    case 'D': nextVal = 500; break;
                    case 'M': nextVal = 1000; break;
                }
                if (val < nextVal) {
                    total -= val;
                } else {
                    total += val;
                }
            } else {
                total += val;
            }
        }
        return total;
    }
};