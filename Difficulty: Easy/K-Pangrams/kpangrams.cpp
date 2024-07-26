//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:

    bool kPangram(string str, int k) {
        // code here
      set<char>st;
      string s="";
      for(int i=0;i<str.size();i++){
          if(str[i]!=' '){
              st.insert(str[i]);
              s+=str[i];
          }
      }
      if(s.size()<26){
          return 0;
      }
      int rem=26-st.size();
      if(k>=rem){
          return 1;
      }
      return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        string str;
        getline(cin, str);

        int k;
        cin >> k;

        Solution ob;
        bool a = ob.kPangram(str, k);
        if (a)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends