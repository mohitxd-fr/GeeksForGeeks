//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        int i = 0;
        int j = 0;
        int k = 0;
        int n1 = arr1.size();
        int n2 = arr2.size();
        int n3 = arr3.size();
        vector<int> v;
        
        while(i < n1 && j < n2 && k < n3)
        {
            if(arr1[i] == arr2[j] && arr2[j] == arr3[k])
            {
                v.push_back(arr1[i]);
                i++;
                j++;
                k++;
                while(i < n1 && arr1[i] == arr1[i-1])
                {
                    i++;
                }
                while(j < n2 && arr2[j] == arr2[j-1])
                {
                    j++;
                }
                while(k < n3 && arr3[k] == arr3[k-1])
                {
                    k++;
                }
            }
            else if(arr1[i] < arr2[j])
            {
                i++;
            }
            else if(arr2[j] < arr3[k])
            {
                j++;
            }
            else 
            {
                k++;
            }
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr, brr, crr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        string input2;
        getline(cin, input2);
        stringstream ss2(input2);
        int number2;
        while (ss2 >> number2) {
            brr.push_back(number2);
        }
        string input3;
        getline(cin, input3);
        stringstream ss3(input3);
        int number3;
        while (ss3 >> number3) {
            crr.push_back(number3);
        }
        Solution ob;
        vector<int> res = ob.commonElements(arr, brr, crr);
        if (res.size() == 0)
            cout << -1;
        for (int i = 0; i < res.size(); i++)
            cout << res[i] << " ";
        cout << endl;
    }
}
// } Driver Code Ends