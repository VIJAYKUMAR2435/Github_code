//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int solve(string &s1,string &s2,int n,int m){
      std::vector<std::vector<int>> dp(n + 1, std::vector<int>(m + 1, 0));
    int maxLength = 0;

    // Fill the dp array
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1];
                maxLength = std::max(maxLength, dp[i][j]);
            } else {
                dp[i][j] = 0; // Reset if characters do not match
            }
        }
    }

    return maxLength;
  }
    int longestCommonSubstr(string s1, string s2){
       int n=s1.size();
       int m=s2.size();
       
         return solve(s1,s2,n,m);
// your code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr(s1, s2) << endl;
    }
}
// } Driver Code Ends