//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
  public:
    long long int substrCount (string s, int k) {
    	//code here.
    	int n=s.size();
    	vector<int>mp1(26,0);
    	vector<int>mp2(26,0);
    	int i=0,j=0,i1=0,c1=0,c2=0;
    	long long int ans=0;
    	while(j<n){
    	    mp1[s[j]-'a']++;
    	    mp2[s[j]-'a']++;
    	    if(mp1[s[j]-'a']==1){
    	        c1++;
    	    }
    	    if(mp2[s[j]-'a']==1){
    	        c2++;
    	    }
    	    while(c1>k){
    	        mp1[s[i]-'a']--;
    	        if(mp1[s[i]-'a']==0){
    	            c1--;
    	        }
    	        i++;
    	    }
    	    while(c2>k-1){
    	        mp2[s[i1]-'a']--;
    	        if(mp2[s[i1]-'a']==0){
    	            c2--;
    	        }
    	        i1++;
    	    }
    	    ans+=(i1-i);
    	    j++;
    	    
    	    
    	}
    	return ans;
        }
};

//{ Driver Code Starts.


int main()
{
    int t; cin >> t;
    while (t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		Solution ob;
		cout <<ob.substrCount (s, k) << endl;
	}
}
// } Driver Code Ends