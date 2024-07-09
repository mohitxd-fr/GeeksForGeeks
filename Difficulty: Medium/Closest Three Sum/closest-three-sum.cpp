//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

// arr : given vector of elements
// target : given sum value

class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        sort(arr.begin(), arr.end());
        int closestSum = numeric_limits<int>::max();
        
        int n = arr.size();
        
        for(int i=0;i<n-2;i++)
        {
            int left = i + 1;
            int right = n - 1;
            
            while(left < right)
            {
                int currentSum = arr[i] + arr[left] + arr[right];
                if(abs(currentSum - target) < abs(closestSum - target) || (abs(currentSum - target) == abs(closestSum - target) && currentSum > closestSum))
                {
                    closestSum = currentSum;
                }
                
                if(currentSum < target)
                {
                    left++;
                }
                else if(currentSum > target)
                {
                    right--;
                }
                else
                {
                    return currentSum;
                }
            }
        }
        return closestSum;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        cin.ignore();
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int key;
        cin >> key;
        // cin.ignore();
        // if (f)
        //     return 0;
        Solution ob;
        cout << ob.threeSumClosest(arr, key) << endl;
    }
    return 0;
}
// } Driver Code Ends