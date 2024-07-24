//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int majorityElement(int a[], int n) {
        unordered_map<int,int> mp;
        if(n == 2)
        {
            return -1;
        }
        int candidate = a[0];
        int count = 1;
        
        for(int i=1;i<n;i++)
        {
            if(a[i] == candidate)
            {
                count++;
            }
            else
            {
                count--;
                if(count == 0)
                {
                    candidate = a[i];
                    count = 1;
                }
            }
        }
        
        int totalCount = 0;
        for(int i=0;i<n;i++)
        {
            if(a[i] == candidate)
            {
                totalCount++;
            }
        }
        
        if(totalCount > n / 2)
        {
            return candidate;
        }
        else
        {
            return -1;
        }
    }
};

//{ Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}

// } Driver Code Ends