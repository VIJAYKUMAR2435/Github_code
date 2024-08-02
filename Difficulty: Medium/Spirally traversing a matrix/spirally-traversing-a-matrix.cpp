//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &matrix) {
       vector<int>result;
          if(matrix.empty()||matrix[0].empty()){
              return result;
          }
          int dir=0;
          int top=0;
          int bottom=matrix.size()-1;
          int left=0;
          int right=matrix[0].size()-1;
          while(top<=bottom && left<=right){
              if(dir==0){
                  for(int i=left;i<=right;i++){
                      result.push_back(matrix[top][i]);
                  }
                  top++;
              }
              else if(dir==1){
                  for(int i=top;i<=bottom;i++){
                      result.push_back(matrix[i][right]);
                  }
                  right--;
              }
              else if(dir==2){
                  for(int i=right;i>=left;i--){
                      result.push_back(matrix[bottom][i]);
                  }
                  bottom--;
              }
              else if(dir==3){
                       for(int i=bottom;i>=top;i--){
                           result.push_back(matrix[i][left]);
                       }
                       left++;
              }
              dir=(dir+1)%4;
            
          }
          return result;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;

    while (t--) {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r, vector<int>(c, 0));

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends