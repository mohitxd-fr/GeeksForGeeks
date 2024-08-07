//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        unordered_map<int, int> mp;
        int count = 0;
        for(int i=0;i<n;i++)
        {
            mp[a[i]]++;
        }
        for(int i=0;i<m;i++)
        {
            if(mp[b[i]] > 0)
            {
                count++;
            }
            mp[b[i]] = 0;
        }
        return count;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0; i < m; i++) cin >> b[i];
        Solution ob;
        cout << ob.NumberofElementsInIntersection(a, b, n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends