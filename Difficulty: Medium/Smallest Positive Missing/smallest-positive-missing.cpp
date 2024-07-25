//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    int missingNumber(int arr[], int n) 
    {
        unordered_set<int> set;
        for(int i=0;i<n;i++)
        {
            if(arr[i] > 0)
            {
                set.insert(arr[i]);
            }
        }
        int missing = 1;
        while(set.find(missing) != set.end())
        {
            missing++;
        }
        return missing;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends