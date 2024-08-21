//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    vector <int> nFibonacci(int N){
        //code herevector<int>v;
        vector<int>v;
        
        int a=0;
        int b=1;
        int c;
        v.push_back(a);
        v.push_back(b);
        for(int i=0;i<N;i++){
            c=a+b;
            if(c>N){
               break; 
            }
            v.push_back(c);
            a=b;
            b=c;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        Solution ob;
        vector <int> ans=ob.nFibonacci(N);
        for(int u:ans)
         cout<<u<<" ";
        cout<<"\n"; 
    }
}
// } Driver Code Ends