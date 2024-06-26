//{ Driver Code Starts


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution {
    int calcCoverage(vector<vector<int>>& matrix,int i,int j,int n,int m)
    {
        int sum = 0;
        
        if(j+1 < m)
        {
            if(matrix[i][j+1] == 1)
            {
                sum = sum + 1;
            }
        }
        if(j-1 >= 0)
        {
            if(matrix[i][j-1] == 1)
            {
                sum = sum + 1;
            }
        }
        if(i+1 < n)
        {
            if(matrix[i+1][j] == 1)
            {
                sum = sum + 1;
            }
        }
        if(i-1 >= 0)
        {
            if(matrix[i-1][j] == 1)
            {
                sum = sum + 1;
            }
        }
        return sum;
    }
  public:
    int findCoverage(vector<vector<int>>& matrix) {
        int total = 0;
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++)
        {
            
            for(int j=0;j<m;j++)
            {
                
                if(matrix[i][j] == 0)
                {
                    
                    total = total + calcCoverage(matrix,i,j,n,m);
                }
            }
        }
        return total;
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> matrix[i][j];
        Solution obj;
        int ans = obj.findCoverage(matrix);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends