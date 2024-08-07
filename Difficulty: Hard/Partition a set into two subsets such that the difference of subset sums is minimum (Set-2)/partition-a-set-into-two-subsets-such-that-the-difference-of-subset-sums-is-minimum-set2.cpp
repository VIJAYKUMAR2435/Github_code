//{ Driver Code Starts
                               //Initial Template for C++


#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
     vector<vector<int>> minDifference(vector<int>& arr, int n){
        //Code here
        int mini = INT_MAX;
        int p[n+1];
        p[0]=1;
        for(int i=1;i<=n;i++)
        p[i]=p[i-1]*2;
        int ans;
        for(int i=0;i<p[n];i++)
        {
            int x=i;
            int s1=0;
            int s2=0;
            int c=0,d=0;
            for(int j=0;j<n;j++)
            {
                int y=p[j];
                if(x&y){
                s1+=arr[j];
                c++;}
                else{
                s2+=arr[j];
                d++;}
            }
            if(mini > abs(s1-s2) && abs(c-d)<=1)
            {
                mini = abs(s1-s2);
                ans = x;
            }
        }
        vector<int>v1,v2;
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            if(ans&p[i])
            v1.push_back(arr[i]);
            else
            v2.push_back(arr[i]);
        }
        v.push_back(v1);
        v.push_back(v2);
        return v;
    }
};

//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        Solution obj;
        vector<vector<int>> ans = obj.minDifference(arr,n);
        
        long long s1=0, s2=0;

        for(int i=0;i<ans[0].size();i++) s1+=ans[0][i];
        for(int i=0;i<ans[1].size();i++) s2+=ans[1][i];
        
        if(s1>s2) swap(s1,s2);

        cout<<s1<<"\n"<<s2<<"\n";
    }
}
                               
// } Driver Code Ends