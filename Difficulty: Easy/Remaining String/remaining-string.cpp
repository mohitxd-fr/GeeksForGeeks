//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string printString(string s, char ch, int count) {
        int n = s.size();
        int i;
        for(i=0;i<n;i++)
        {
            if(s[i] == ch)
            {
                count--;
            }
            if(count == 0)
            {
                break;
            }
        }
        if(count != 0 || i+1 == n)
        {
            return "";
        }
        string ans = s.substr(i+1,n-i+1);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        string s;
        char ch;
        int count;

        cin >> s >> ch >> count;
        Solution ob;
        cout << ob.printString(s, ch, count) << "\n";
    }

    return 0;
}
// } Driver Code Ends