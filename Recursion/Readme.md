# Recursion

A comprehensive guide to understanding recursion in data structures and algorithms.

## Overview

Recursion is a programming technique where a function calls itself to solve a problem by breaking it down into smaller, similar subproblems. Each recursive call works on a simpler version of the original problem until reaching a base case.

## Key Concepts

### Structure of Recursive Functions

Every recursive function contains two essential components:

1. **Base Case**: The condition that stops recursion and returns a value directly
2. **Recursive Case**: The part where the function calls itself with modified parameters

```python
def factorial(n):
    # Base case
    if n == 0 or n == 1:
        return 1
    # Recursive case
    return n * factorial(n - 1)
```

### Types of Recursion

- **Direct Recursion**: Function calls itself directly
- **Indirect Recursion**: Function calls another function that eventually calls the original
- **Tail Recursion**: Recursive call is the last operation in the function
- **Linear Recursion**: Function makes a single recursive call
- **Tree Recursion**: Function makes multiple recursive calls

## Common Examples

### The Handshake Problem

If n people are in a room and each person shakes hands once with every other person, the total number of handshakes h(n) can be calculated recursively:

- Base case: h(1) = 0
- Recursive case: h(n) = (n-1) + h(n-1)

### Fibonacci Sequence

```python
def fibonacci(n):
    if n <= 1:
        return n
    return fibonacci(n-1) + fibonacci(n-2)
```

## Efficiency and Complexity

### Time Complexity

- Depends on the number of recursive calls and work done per call
- Can range from O(n) for linear recursion to O(2^n) for tree recursion

### Space Complexity

- Each recursive call uses stack space
- Space complexity is O(depth of recursion)

## Advanced Topics

### Backtracking

A technique that uses recursion to explore all possible solutions by trying different paths and backtracking when a path doesn't lead to a solution.

### Dynamic Programming

Optimizes recursion by storing results of subproblems to avoid redundant calculations (memoization).

## Best Practices

1. Always define a clear base case to prevent infinite recursion
2. Ensure recursive calls progress toward the base case
3. Consider iterative solutions for better space efficiency
4. Use dynamic programming for problems with overlapping subproblems
5. Be mindful of stack overflow for deep recursions

## When to Use Recursion

✅ Tree and graph traversals  
✅ Divide and conquer algorithms  
✅ Problems with naturally recursive structure  
✅ Backtracking problems

❌ Simple iterative tasks  
❌ When stack space is limited  
❌ Performance-critical code without optimization

## Resources

- Practice recursive thinking by breaking problems into smaller versions
- Trace recursive calls manually to understand execution flow
- Study classic recursive algorithms (merge sort, quicksort, tree traversals)

---

**Course**: DSA Chapter 6 - Recursion  
**Topics Covered**: Structure, Types, Efficiency, Backtracking, Dynamic Programming
