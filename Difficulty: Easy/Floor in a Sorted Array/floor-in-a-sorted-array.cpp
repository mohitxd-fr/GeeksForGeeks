//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int findFloor(vector<long long> v, long long n, long long x) {
        auto it = lower_bound(v.begin(),v.end(), x);
        int ind = it - v.begin();
        if(v[ind] == x)
        {
            return ind;
        }
        else
        {
            ind = ind - 1;
        }
        if(ind < 0)
        {
            return -1;
        }
        return ind;
    }
};


//{ Driver Code Starts.

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
// } Driver Code Ends