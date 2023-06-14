//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int arr[], int n, int k) {
        // code here
        map<long, int, greater<int>> container;
        for(int i=0; i < n; i++)
            container[arr[i]]++;
          
          
        // for(auto el : container)
        //     cout << el.first << " ";
            
        long long sum = 0;
        for(int i = 0; i < k; i++) {
            map<long, int>::iterator el = container.begin();
            el->second--;
            sum += el->first;
            container[el->first / 2]++;
            
            if(el->second == 0)
                container.erase(el);
        }
        
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends