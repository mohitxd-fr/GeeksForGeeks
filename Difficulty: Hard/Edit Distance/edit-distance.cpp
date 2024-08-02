//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    vector<vector<int>> dp;
    int solve(int i, int j, string &s1, string &s2)
    {
        int n = s1.size();
        int m = s2.size();
        if(i>=n) return m-j;
        if(j>=m) return n-i;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int take = 0;
        int notTake = 0;
        if(s1[i] == s2[j])
        {
            take = solve(i+1, j+1, s1, s2);
        }
        else
        {
            int insertOp = 1 + solve(i, j+1, s1, s2);
            int deleteOp = 1 + solve(i+1, j, s1, s2);
            int replaceOp = 1 + solve(i+1, j+1, s1, s2);
            
            notTake = min(insertOp, min(deleteOp, replaceOp));
        }
        return dp[i][j] = take + notTake;
    }
    
  public:
    int editDistance(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        dp.resize(n, vector<int>(m, -1));
        int ans = solve(0, 0, str1, str2);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends