//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
      static bool cmp(pair<int,int> a,pair<int,int> b){
        if(a.second==b.second)
        return a.first<b.first;
        return a.second>b.second;
    }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        unordered_map<int,int> b;
        for(int i:arr){
            b[i]++;   
        }
        vector<pair<int,int>> a;
        for(int i:arr){
            a.push_back({i,b[i]});
        }
        sort(a.begin(),a.end(),cmp);
        vector<int> ans;
        for(auto i:a){
            ans.push_back(i.first);
        }
        return ans;
        
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
        Solution obj;
        vector<int> v;
        v = obj.sortByFreq(arr);
        for (int i : v)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends