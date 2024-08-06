//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
    int getValues(string &str, string &a,string &b,string &c,string &d)
    {
        int n = str.size();
        int countDot = 0;
        for(int i=0;i<n;i++)
        {
            if(str[i]=='.')
            {
                countDot++;
                continue;
            }
            if(countDot == 0)
            {
                a += str[i];
            }
            else if(countDot == 1)
            {
                b += str[i];
            }
            else if(countDot == 2)
            {
                c += str[i];
            }
            else if(countDot == 3)
            {
                d += str[i];
            }
        }
        return countDot;
    }
    int check(int x)
    {
        if(x >= 0 && x <= 255)
        {
            return true;
        }
        return false;
    }
    bool validate(string &a, string &b, string &c, string &d)
    {
        if(a == "" || b == "" || c == "" || d == "")
        {
            return false;
        }
        if((a.size() > 1 && a[0] == '0') || (b.size() > 1 && b[0] == '0') ||
            (c.size() > 1 && c[0] == '0') || (d.size() > 1 && d[0] == '0'))
        {
            return false;
        }
        if(a.size() > 3 || b.size() > 3 || c.size() > 3 || d.size() > 3)
        {
            return false;
        }
        return true;
    }
  public:
    int isValid(string str) {
        string a = "";
        string b = "";
        string c = "";
        string d = "";
        
        int count = getValues(str, a, b, c, d);
        if(count!=3)
        {
            return false;
        }
        if(!validate(a,b,c,d))
        {
            return false;
        }
       
        int x1;
        int x2;
        int x3;
        int x4;
        x1 = stoi(a);
        x2 = stoi(b);
        x3 = stoi(c);
        x4 = stoi(d);
        if(check(x1) && check(x2) && check(x3) && check(x4))
        {
            return true;
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        // if (s.size() == 3) {
        //     cout << "false" << endl;
        //     return 0;
        // }
        Solution ob;
        bool f = ob.isValid(s);
        if (f)
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 0;
}
// } Driver Code Ends