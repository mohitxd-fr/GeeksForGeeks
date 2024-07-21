//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    string reverseWords(string S) 
    {
        string ans = "";
        int n = S.size();
        string temp = "";
        for(int i=n-1;i>=0;i--)
        {
            if(S[i] != '.')
            {
                temp.push_back(S[i]);
            }
            else
            {
                reverse(temp.begin(),temp.end());
                ans += temp;
                ans += '.';
                temp = "";
            }
        }
        reverse(temp.begin(), temp.end());
        ans += temp;
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends