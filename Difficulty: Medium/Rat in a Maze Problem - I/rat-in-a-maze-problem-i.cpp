//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
 void dfs(vector<vector<int>>&mat,int n,int i,int j,string s,vector<string>&path){
     if(i<0||i>=n||j<0||j>=n||mat[i][j]==0){
         return;
     }
     if(i==n-1&&j==n-1){
         path.push_back(s);
     }
     mat[i][j]=0;
     dfs(mat,n,i-1,j,s+'U',path);
     dfs(mat,n,i+1,j,s+'D',path);
     dfs(mat,n,i,j-1,s+'L',path);
     dfs(mat,n,i,j+1,s+'R',path);
     mat[i][j]=1;
     
 }
    vector<string> findPath(vector<vector<int>> &mat) {
        // Your code goes here
        int n=mat.size();
        string s="";
        vector<string>path;
        dfs(mat,n,0,0,s,path);
        return path;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends