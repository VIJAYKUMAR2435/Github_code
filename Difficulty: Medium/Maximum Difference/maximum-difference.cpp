//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    /*You are required to complete this method */
   vector<int> nearestsmaller(vector<int>& arr, int n) {
    vector<int> nls;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            nls.push_back(0);  // No smaller element to the left
        } else {
            nls.push_back(st.top());  // Smaller element found
        }
        st.push(arr[i]);  // Push the current element onto the stack
    }
    return nls;
}

vector<int> rightsmaller(vector<int>& arr, int n) {
    vector<int> nrs;
    stack<int> st;
    for (int i = n - 1; i >= 0; i--) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            nrs.push_back(0);  // No smaller element to the right
        } else {
            nrs.push_back(st.top());  // Smaller element found
        }
        st.push(arr[i]);  // Push the current element onto the stack
    }
    reverse(nrs.begin(), nrs.end());  // Reverse to maintain correct order
    return nrs;
}

    int findMaxDiff(vector<int> &arr) {
        // Your code here
        int n=arr.size();
        int maxi=INT_MIN;
        int diff=0;
        vector<int>ls=nearestsmaller(arr,n);
        vector<int>rs=rightsmaller(arr,n);
        for(int i=0;i<n;i++){
           
                diff=abs(ls[i]-rs[i]);
                maxi=max(maxi,diff);
            
        }
        return maxi;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string input;
        int num;
        vector<int> arr;

        getline(cin, input);
        stringstream s2(input);
        while (s2 >> num) {
            arr.push_back(num);
        }

        Solution ob;
        cout << ob.findMaxDiff(arr) << endl;
    }
    return 0;
}

// } Driver Code Ends