//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
void solve(int n, int m, vector<vector<char>>& mat, int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m || mat[i][j] != 'O') {
        return;
    }
    mat[i][j] = 'v';
    solve(n, m, mat, i - 1, j);
    solve(n, m, mat, i + 1, j);
    solve(n, m, mat, i, j - 1);
    solve(n, m, mat, i, j + 1);
}

vector<vector<char>> fill(int n, int m, vector<vector<char>> mat) {
    // Check boundary rows and columns
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1) {
                if (mat[i][j] == 'O') {
                    solve(n, m, mat, i, j);
                }
            }
        }
    }

    // Update the matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == 'O') {
                mat[i][j] = 'X';
            } else if (mat[i][j] == 'v') {
                mat[i][j] = 'O';
            }
        }
    }

    return mat;


    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for(int i = 0;i < n;i++)
            for(int j=0; j<m; j++)
                cin>>mat[i][j];
        
        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for(int i = 0;i < n;i++) {
            for(int j = 0;j < m;j++) {
                cout<<ans[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends