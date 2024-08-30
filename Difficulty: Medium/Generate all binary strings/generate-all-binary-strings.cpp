//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
void generate(string s,int num,vector<string>&ans){
    int size=s.size();
    if(size==num){
        ans.push_back(s);
    }
    else{
        if(s[size-1]=='0'){
            generate(s+'0',num,ans);
            generate(s+'1',num,ans);
        }
        else{
            generate(s+'0',num,ans);
        }
    }
}
    vector<string> generateBinaryStrings(int num){
        //Write your code
        vector<string>ans;
        generate("0",num,ans);
        generate("1",num,ans);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        
        vector<string> v = obj.generateBinaryStrings(n);
        for(auto it:v) cout<<it<<" ";
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends