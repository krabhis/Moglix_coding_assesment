Approach 1: Approach is to store balance the parenthesis in temp variable according to the condition when temp is zero find the max in that window.

Time and space complexity
Outer loop: O(n)
inner loop : O(n)
total : O(n^2)
space : O(1)

Approach 2:

We use a stack of indices and initially push -1 as a dummy base index. This helps when a valid substring starts from index 0, because we can directly calculate its length.

While traversing the string, if we see '(', we push its index. If we see ')', we pop one index. If the stack becomes empty, it means this ')' is unmatched, so we push its index as the new boundary. Otherwise, the current valid substring length is i - st.top(), and we update the maximum answer.

Complexity:

the time complexity is O(n)  
 the space complexity is O(n).
