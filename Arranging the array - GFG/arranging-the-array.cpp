//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define ll long long

// } Driver Code Ends
class Solution
{
    public:
        void Rearrange(int arr[], int n)
        {
            // Your code goes here
             vector<int> ans ;
           
           // For storing the Positive Numbers 
           for(int i=0;i<n;i++){
               if(arr[i]>=0){
                   ans.push_back(arr[i]);
               }
           }
           
           // Index track for negative number 
           int k = 0 ;
           
           for(int i=0;i<n;i++){
               if(arr[i]<0){
                   swap(arr[i],arr[k]);
                    k++;
               }
           }
           
           // It is used for copying all the Positive elements to the end 
           int j = 0;
           for(int i=k ;i<n;i++){
               arr[i] = ans[j] ;
               j++;
           }
           
           
        }
};

//{ Driver Code Starts.
void Rearrange(int arr[], int n);

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        long long j=0;
        Solution ob;
        ob.Rearrange(arr, n);
      
        for (int i = 0; i < n; i++) 
            cout << arr[i] << " "; 
        cout << endl;  
    }
    return 0; 
} 
// } Driver Code Ends