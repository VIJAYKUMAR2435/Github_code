//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

 bool  cmp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        else{
            return a.second>b.second;
        }
    }
class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    // bool  cmp(pair<int,int>a,pair<int,int>b){
    //     if(a.second==b.second){
    //         return a.first<b.first;
    //     }
    //     else{
    //         return a.second>b.second;
    //     }
    // }
    vector<int> sortByFreq(vector<int>& arr) {
        // Your code here
        int n=arr.size();
        unordered_map<int,int>mp;
        for(auto i:arr){
            mp[i]++;
        }
        vector<pair<int,int>>v;
        for(auto i:mp){
            v.push_back({i.first,i.second});
        }
        sort(v.begin(),v.end(),cmp);
        vector<int>ans;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<v[i].second;j++){
                ans.push_back(v[i].first);
            }
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