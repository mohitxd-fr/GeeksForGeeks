//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    bool ispar(string x)
    {
        stack<char> stack;
        unordered_map<char, char> mp = {{')', '('},
                                        {']', '['},
                                        {'}', '{'}};
        for(char c : x)
        {
            if(mp.find(c) == mp.end())
            {
                stack.push(c);
            }
            else if(!stack.empty() && mp[c] == stack.top())
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
        return stack.empty();
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends