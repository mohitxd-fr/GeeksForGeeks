//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    bool areIsomorphic(string s, string t)
    {
        int n = s.size();
        int m = t.size();
        if(n != m)
        {
            return false;
        }
        unordered_map<char, char> st;
        unordered_map<char, char> ts;

        for(int i=0;i<n;i++)
        {
            char sChar = s[i];
            char tChar = t[i];

            if(st.find(sChar) == st.end() && ts.find(tChar) == ts.end())
            {
                st[sChar] = tChar;
                ts[tChar] = sChar;
            }
            else if(st[sChar] != tChar && ts[tChar] != sChar)
            {
                return false;
            }
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends