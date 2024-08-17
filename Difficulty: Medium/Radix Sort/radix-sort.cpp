//{ Driver Code Starts
//Initial Template for C++

#include  <bits/stdc++.h> 
using namespace std; 
  

// } Driver Code Ends
//User function Template for C++
void radixSortUtil(int arr[], int exp,int n)
{
    vector<int> freq(10, 0);
    for(int i=0;i<n;i++){
        freq[(arr[i]/exp)%10]++;
    }
    vector<int> prefixSum(10, 0);
    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            prefixSum[i] = freq[i] - 1;
        }
        else
        {
            prefixSum[i] = prefixSum[i - 1] + freq[i];
        }
    }

    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ans[prefixSum[(arr[i] / exp) % 10]] = arr[i];
        prefixSum[(arr[i] / exp) % 10]--;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
void radixSort(int arr[], int n) 
{ 
   // code here
   int maxi = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    int exp = 1;
    while (exp <= maxi)
    {
        radixSortUtil(arr, exp,n);
        exp *= 10;
    }
} 

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
  
        radixSort(arr, n); 
        
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        
        cout<<endl;
    }
    return 0; 
} 
// } Driver Code Ends