//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getPairsCount(const vector<int>& arr, int k) {
        int n = arr.size();
        int count = 0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            int temp = k-arr[i];
            if(mp.find(temp) != mp.end())
            {
                count += mp[k - arr[i]];
            }
            mp[arr[i]]++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline character after t
    while (t--) {
        vector<int> arr;
        int k;

        cin >> k;
        cin.ignore(); // Ignore the newline character after k

        string input;

        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getPairsCount(arr, k);
        cout << ans << "\n";
    }

    return 0;
}
// } Driver Code Ends