//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
 void solve(vector<int>&arr,int n,int ind,int sum,vector<int>&ans){
     if(ind==n){
         ans.push_back(sum);
         return;
     }
     //pick
     solve(arr,n,ind+1,sum+arr[ind],ans);
     //not pick
     solve(arr,n,ind+1,sum,ans);
 }
    vector<int> subsetSums(vector<int> arr, int n) {
        int sum=0;
        vector<int>ans;
        solve(arr,n,0,sum,ans);
        return ans;
        
        // Write Your Code here
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr, N);
        sort(ans.begin(), ans.end());
        for (auto sum : ans) {
            cout << sum << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends