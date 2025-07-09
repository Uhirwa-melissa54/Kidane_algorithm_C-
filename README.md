#  Kadane's Algorithm – Maximum Subarray Sum

##  Overview

Today I learned about **Kadane's Algorithm**, a fundamental algorithm in data structures and algorithms. It's used to find the **maximum sum of any contiguous subarray** within a one-dimensional array of integers.

Kadane's Algorithm is especially useful because it works in **O(n)** time, making it suitable for handling large datasets efficiently. It's a popular topic in coding interviews and competitive programming.

---

##  Problem Statement

Given an array of integers (which may include negative numbers), find the **maximum possible sum** of any **contiguous subarray**.

---

## What I Learned

- Kadane’s algorithm **scans the array once**, updating two values at each step:
  - `sum` – the maximum subarray sum **ending at the current index**
  - `best` – the overall maximum subarray sum found so far
- At each index `i`, we decide
- 
  sum = max(array[i], sum + array[i]);
  best = max(best, sum);
