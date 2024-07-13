//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution 
{
    public: 
    void merge(int arr[], int l, int m, int r)
    {
        vector<int> temp(r - l + 1);
        int left = l; 
        int right = m + 1;
        int k = 0;
        
        while(left <= m && right <= r)
        {
            if(arr[left] <= arr[right])
            {
                temp[k++] = arr[left++];
            }
            else 
            {
                temp[k++] = arr[right++];
            }
        }
        while(left <= m)
        {
            temp[k++] = arr[left++];
        }
        while(right <= r)
        {
            temp[k++] = arr[right++];
        }
        for(int i = l; i <= r; i++)
        {
            arr[i] = temp[i-l];
        }
    }

    public: 
    void mergeSort(int arr[], int low, int high)
    {
        if(low == high)
        {
            return;
        }
        int mid = low + (high - low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr,mid+1, high);
        merge(arr,low,mid,high);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends