// Approach:  Approach is to store   balance the parenthesis in temp variable according to the condition when temp is zero find the max in that window.



#include <bits/stdc++.h>
using namespace std;

int solve(string s) {
    int n = s.size();
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int temp = 0;

        for (int j = i; j < n; j++) {
            if (s[j] == '(')
                temp++;
            else
                temp--;

             if (temp < 0)
                break;

             if (temp == 0) {
                ans = max(ans, j - i + 1);
            }
        }
    }

    return ans;
}

 

int main() {
     string s;
     cin>>s;
     int res = solve(s);
     cout<<res;

    return 0;
} 


//  Time and space complexity
// Outer loop: O(n)
// inner loop : O(n)
// total : O(n^2)
// space : O(1)
 

