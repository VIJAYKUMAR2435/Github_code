//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
const int mod=1e9+7;
    long long int fibSum(long long int N){
        //code here
        
        
        if (N == 0) return 0;
    if (N == 1) return 1;

    vector<long long int> dp(N + 1);
    dp[0] = 0;
    dp[1] = 1;
    long long int res = dp[0] + dp[1];  // Sum of dp[0] and dp[1]

    for (int i = 2; i <= N; i++) {
        dp[i] = (dp[i-1] + dp[i-2]) % mod;
        res = (res + dp[i]) % mod;
    }
    return res;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        Solution ob;
        cout << ob.fibSum(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends