//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int alternatingMaxLength(vector<int>& arr) {
        int increasing = 1;
        int decreasing = 1;
        int n = arr.size();
        for(int i=1;i<n;i++)
        {
            if(arr[i] > arr[i-1])
            {
                increasing = decreasing + 1;
            }
            else if(arr[i] < arr[i-1])
            {
                decreasing = increasing + 1;
            }
        }
        return max(increasing, decreasing);
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string s;
        getline(cin, s);
        stringstream ss(s);
        vector<int> arr;
        string temp;
        while (ss >> temp) {
            arr.push_back(stoi(temp));
        }
        Solution obj;
        int ans = obj.alternatingMaxLength(arr);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends