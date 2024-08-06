//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0
You are required to complete this method */
class Solution {
  public:
    int isValid(string str) {
        // code here
     int n=str.length();
        int i=0;
        int count=0;
        while(i<n){
            string s;
            while(i<n && str[i]!='.'){
                s+=str[i];
                i++;
            }
            
            int num=stoi(s);
            if(num>=0 && num<=255)
            count++;
            i++;
        }
        return count==4;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends