//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int longestCommonSubstr(string str1, string str2) {
        // your code here
       int n=str1.size();
       int m=str2.size();
       int dp[n+1][m+1];
       int longest=0;
       for(int i=0;i<n+1;i++){
           for(int j=0;j<m+1;j++){
               dp[i][j]=0;
           }
       }
       for(int i=1;i<n+1;i++){
           for(int j=1;j<m+1;j++){
               if(str1[i-1]==str2[j-1]){
                   dp[i][j]=1+dp[i-1][j-1];
                   longest=max(longest,dp[i][j]);
               }
           }
       }
       return longest;
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