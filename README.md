## Approach 1

The approach is to store the balance of parentheses in a temporary variable. According to the condition, when the temporary variable becomes zero, we find the maximum length in that window.

### Time and Space Complexity

Outer loop: O(n)

Inner loop: O(n)

Total Time Complexity: O(n²)

Space Complexity: O(1)

---

## Approach 2

We use a stack of indices and initially push `-1` as a dummy base index. This helps when a valid substring starts from index 0, because we can directly calculate its length.

While traversing the string, if we see `'('`, we push its index. If we see `')'`, we pop one index. If the stack becomes empty, it means this `')'` is unmatched, so we push its index as the new boundary. Otherwise, the current valid substring length is `i - st.top()`, and we update the maximum answer.

### Complexity

Time Complexity: O(n)

Space Complexity: O(n)
