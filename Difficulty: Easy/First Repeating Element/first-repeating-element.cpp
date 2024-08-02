//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        int n = arr.size();
        int mini = INT_MAX;
        unordered_map<int, int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp.find(arr[i]) != mp.end())
            {
                mini = min(mini, mp[arr[i]]);
            }
            else
            {
                mp[arr[i]] = i;
            }
        }
        return (mini == INT_MAX) ? -1 : mini+1;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.firstRepeated(arr) << endl;
    }

    return 0;
}

// } Driver Code Ends