//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
     string findlcp(string&s1,string&s2){
         int i=0;
         int j=0;
         string lcp="";
         while(i<s1.length()&&j<s2.length()){
             if(s1[i]==s2[j]){
                 lcp+=s1[i];
                 i++;
                 j++;
             }
             else{
                 break;
             }
         }
         return lcp;
     }
    string longestCommonPrefix(vector<string> arr) {
          if (arr.empty()) {
        return "-1";  // Return "-1" if the input vector is empty
    }
    
    string lcp = arr[0];  // Start with the first string as the initial prefix
    for (int i = 1; i < arr.size(); i++) {
        lcp = findlcp(lcp, arr[i]);
        if (lcp.empty()) {
            return "-1";  // Return "-1" if there is no common prefix
        }
    }
    
    return lcp;
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends