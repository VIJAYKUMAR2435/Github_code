//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string smallestNumber(int s, int d) {
      
        if(s==0 and d>1) return "-1";
        if(s > 9*d) return "-1";
        
        string t = "";
        while(d){
            if(s > 9)
            {
                t += "9";
                s -= 9;
                d--;
            }
            else if(s <= 9 and s>1 and d>1)
            {
                t += to_string(s-1);
                s = 1;
                d--;
            }
            else if(d > 1 and s==1){
                t += "0";
                d--;
            }
            else if(d==1 and s<=9){
                t += to_string(s);
                s= 0;
                d--;
            }
        }
        
        reverse(t.begin(),t.end());
        return t;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int s, d;
        cin >> s >> d;
        Solution ob;
        cout << ob.smallestNumber(s, d) << "\n";
    }

    return 0;
}
// } Driver Code Ends