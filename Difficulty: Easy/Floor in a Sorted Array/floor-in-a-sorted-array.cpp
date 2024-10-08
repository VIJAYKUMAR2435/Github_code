//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int binary_search(vector<long long>&v,long long n,long long x,int l,int r){
        int res=-1;
       while(l<=r){
           int mid=l+(r-l)/2;
           if(v[mid]==x){
               return mid;
           }
           else if(v[mid]>x){
              
               r=mid-1;
           }
           else{
                res=mid;
               l=mid+1;
           }
       }
       return res;
        
    }
    int findFloor(vector<long long> &v, long long n, long long x) {

        // Your code here
        binary_search(v,n,x,0,n-1);
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends