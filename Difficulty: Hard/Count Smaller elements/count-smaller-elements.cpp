//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++
//  User function template for C++

class Solution {
  public:
    vector<int> constructLowerArray(vector<int> &arr) {
        int n = arr.size();
        vector<int> temp;
        vector<int> ans(n);
        
        for(int i=n-1;i>=0;i--)
        {
            if(n == 0)
            {
                ans[i] = 0;
                temp.push_back(arr[i]);
            }
            else
            {
                int lb = lower_bound(temp.begin(), temp.end(), arr[i])-temp.begin();
                ans[i] = lb;
                temp.insert(temp.begin() + lb, arr[i]);
            }
        }
        return ans;
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
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        vector<int> a = ob.constructLowerArray(arr);
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends