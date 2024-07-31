//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    string longestCommonPrefix(vector<string> s) {
        int n = s.size();
        int size = s[0].size();
        string ans = "";

        for(int i=0;i<size;i++)
        {
            char ch = s[0][i];
            bool match = true;
            for(int j=1;j<n;j++)
            {
                if(s[j].size() < i || ch != s[j][i])
                {
                    match = false;
                    break;
                }
            }
            if(match == false)
            {
                break;
            }
            else
            {
                ans.push_back(ch);
            }
        }
        return (ans.size() > 0) ? ans : "-1";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<string> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        string number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        cout << ob.longestCommonPrefix(arr) << endl;
    }
}

// } Driver Code Ends