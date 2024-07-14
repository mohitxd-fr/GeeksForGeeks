//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        int zero = 0;
        int one = 0;
        int n = arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i] == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }
        int i=0;
        while(zero)
        {
            arr[i++] = 0;
            zero--;
        }
        while(one)
        {
            arr[i++] = 1;
            one--;
        }
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
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends