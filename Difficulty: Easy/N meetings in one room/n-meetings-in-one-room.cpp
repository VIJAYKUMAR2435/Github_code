//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int n, int start[], int end[]) {
        // Your code here
        vector<pair<int,int>>meet(n);
        for(int i=0;i<n;i++){
            meet[i]={end[i],start[i]};
        }
        sort(meet.begin(),meet.end());
        int c=1;
        int time=meet[0].first;
        for(int i=1;i<n;i++){
            if(meet[i].second>time){
                c++;
                time=meet[i].first;
            }
        }
        return c;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++)
            cin >> start[i];

        for (int i = 0; i < n; i++)
            cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(n, start, end);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends