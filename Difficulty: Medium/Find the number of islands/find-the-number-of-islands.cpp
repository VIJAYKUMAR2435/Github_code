//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
void solve(vector<vector<char>>& grid, int i, int j) {
    int n = grid.size();
    int m = grid[0].size();
    if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != '1') {
        return;
    }
    grid[i][j] = 'v'; 
    solve(grid, i - 1, j);
    solve(grid, i + 1, j);
    solve(grid, i, j - 1);
    solve(grid, i, j + 1);
    solve(grid, i-1, j-1); // top-left
        solve(grid, i-1, j+1); // top-right
        solve(grid, i+1, j-1); // bottom-left
        solve(grid, i+1, j+1); // bottom-right

}
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
    int m = grid[0].size();
    int c = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                
                c++;
                solve(grid, i, j);
            }
        }
    }
    return c;

        // Code here
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends