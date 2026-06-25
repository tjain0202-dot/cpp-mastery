<!-- *Note: The code logic and problem-solving implementations in this repository are entirely written by me. I use AI tools to help structure, format, and polish my README documentation and the explanatory comments inside the code files.*
# LeetCode Practice (C++)

This is my personal repository where I am practicing C++ and solving LeetCode problems. I use this space to track my progress, learn how to write cleaner code, and understand basic runtime differences.

## Repository Contents

* **01 OOP/** - Basic practice files for Object-Oriented Programming concepts.
* **02 Leetcode solution/** - Solutions to coding problems, organized by name.
  * **two-sum/**
    * `twoSum_naive.cpp` - Brute-force approach using nested loops.
    * `twoSum_Optimized.cpp` - Faster approach using a hash map.
  * **roman-to-integer/**
    * `rooman-integer-naive.cpp` - Solution using a hash map (`std::unordered_map`).
    * `rooman-integer-optimized.cpp` - Faster solution using a `switch` statement instead of a map.
  * **remove-duplicates-from-sorted-array/**
    * `removeDuplicates.cpp` - Fast, memory-safe solution using the two-pointer approach.

## Notes on What I Learned

### 1. Two Sum
* **First Attempt (Nested Loops):** I used two loops to check every possible pair. It works but it is slow because it checks things multiple times ($O(n^2)$ time).
* **Second Attempt (Hash Map):** I used a map to look up numbers instantly. It runs much faster ($O(n)$ time) but uses a bit more memory ($O(n)$ space) to store the map.

### 2. Roman to Integer
* **First Attempt (Hash Map):** I used a hash map to match Roman symbols with numbers. It is clean to read, but creating and looking up values in the map adds a little bit of slowdown in practice.
* **Second Attempt (Switch Case):** I replaced the hash map with a standard `switch` statement. It does the same linear scan ($O(n)$ time), but it runs noticeably faster because `switch` statements have less overhead than map lookups.

### 3. Remove Duplicates from Sorted Array
* **The Logic:** I learned that using nested loops and trying to delete items with `.erase()` while looping is bad. It can crash the program because memory shifts under your pointers (iterator invalidation), and it is very slow.
* **The Two-Pointer Approach:** Since the array is already sorted, duplicates sit right next to each other. I used an "Assistant" pointer to mark unique spots and a "Scanner" pointer to check ahead. We just overwrite duplicates in place, which makes it safe and runs in a fast $O(n)$ time with zero extra memory overhead.

## My Setup
* **Language:** C++
* **IDE:** Visual Studio Code
* **OS:** Windows (PowerShell & Git) -->