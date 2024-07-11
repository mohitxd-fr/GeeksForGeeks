//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    long long gcd(long long int a, long long int b)
    {
        if(b == 0)
        {
            return a;
        }
        return gcd(b, a % b);
    }
    
    long long lcm(int a, int b)
    {
        return (a / gcd(a, b)) * b;
    }
    
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        return {lcm(A,B),gcd(A,B)};
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends