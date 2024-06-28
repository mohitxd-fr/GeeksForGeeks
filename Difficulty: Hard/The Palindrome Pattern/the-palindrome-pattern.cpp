//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    bool checkRow(vector<vector<int>> &arr,int row)
    {
        int m = arr[row].size();
        for(int i=0;i<m/2;i++)
        {
            if(arr[row][i] != arr[row][m-i-1])
            {
                return false;
            }
        }
        return true;
    }
    bool checkColumn(vector<vector<int>> &arr,int col)
    {
        int n = arr.size();
        for(int i=0;i<n/2;i++)
        {
            if(arr[i][col] != arr[n-i-1][col])
            {
                return false;
            }
        }
        return true;
    }
  public:

    string pattern(vector<vector<int>> &arr) {
        int n = arr.size();
        int m = arr[0].size();
        
        for(int i=0;i<n;i++)
        {
            if(checkRow(arr, i))
            {
                return  to_string(i) +" " + "R";
            }
        }
        
        for(int i=0;i<m;i++)
        {
            if(checkColumn(arr, i))
            {
                return to_string(i) + " " + "C";
            }
        }
        
        return "-1";
    }
};


//{ Driver Code Starts.

int main() {

    int t, n, i, j, flag, k;
    cin >> t;

    while (t--) {
        cin >> n;
        vector<vector<int>> a(n, vector<int>(n));

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        }
        Solution ob;
        cout << ob.pattern(a) << endl;
    }
    return 0;
}
// } Driver Code Ends