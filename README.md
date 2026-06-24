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

## Notes on What I Learned

### 1. Two Sum
* **First Attempt (Nested Loops):** I used two loops to check every possible pair. It works but it is slow because it checks things multiple times ($O(n^2)$ time).
* **Second Attempt (Hash Map):** I used a map to look up numbers instantly. It runs much faster ($O(n)$ time) but uses a bit more memory ($O(n)$ space) to store the map.

### 2. Roman to Integer
* **First Attempt (Hash Map):** I used a hash map to match Roman symbols with numbers. It is clean to read, but creating and looking up values in the map adds a little bit of slowdown in practice.
* **Second Attempt (Switch Case):** I replaced the hash map with a standard `switch` statement. It does the same linear scan ($O(n)$ time), but it runs noticeably faster because `switch` statements have less overhead than map lookups.

## My Setup
* **Language:** C++
* **IDE:** Visual Studio Code
* **OS:** Windows (PowerShell & Git)
