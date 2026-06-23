# C++ Mastery

My personal repository for practicing Object-Oriented Programming (OOP) and solving LeetCode problems in C++. I am using this space to track my coding progress, learn algorithm optimization, and keep my solutions structured.

## Repository Contents

* **`01 OOP/`** - Code files focused on learning core Object-Oriented Programming concepts.
* **`02 Leetcode solution/`** - Solved coding challenges, grouped by problem names.
  * **`two-sum/`** - Solutions for LeetCode #1 (Two Sum).
    * `twoSum_naive.cpp` - My initial brute-force approach using nested loops.
    * `twoSum_Optimized.cpp` - Optimized pass using a hash map for faster execution.

##  What I Learned (Two Sum Breakdown)

### Naive Approach
* **How it works:** I used a nested `for` loop to check every number pair against the target.
* **Time Complexity:** $O(n^2)$ — Sluggish for large datasets because it checks combinations repeatedly.
* **Space Complexity:** $O(1)$ — Highly memory efficient since it doesn't use extra data structures.

### Optimized Approach
* **How it works:** I used an `std::unordered_map` to store elements as I iterate. It looks up the required complement instantly.
* **Time Complexity:** $O(n)$ — Runs much faster because it solves the problem in a single pass.
* **Space Complexity:** $O(n)$ — Uses more memory to maintain the hash map data structure.

## 🛠️ My Setup
* **Language:** C++
* **IDE:** Visual Studio Code
* **Environment:** Windows (PowerShell & Git)
