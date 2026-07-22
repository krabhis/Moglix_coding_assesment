// Approach:

// We use a stack of indices and initially push -1 as a dummy base index. This helps when a valid substring starts from index 0, because we can directly calculate its length.

// While traversing the string, if we see '(', we push its index. If we see ')', we pop one index. If the stack becomes empty, it means this ')' is unmatched, so we push its index as the new boundary. Otherwise, the current valid substring length is i - st.top(), and we update the maximum answer.





#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n = s.size();
    if(n==1||n==0) return 0;
    stack<int> st;
    st.push(-1);       
    int ans = 0;
    for (int i = 0; i < n; i++) {

        if (s[i] == '(') {
            st.push(i);
        }
        else {
            st.pop();

            if (st.empty()) {
                st.push(i);  
            }
            else {
                ans = max(ans, i - st.top());
            }
        }
    }

    return ans;
}

int main() {
    string s;
    cin>>s;
    cout << solve(s);
}


// Complexity: 

  // the time complexity is O(n)  
  // the space complexity is O(n).
