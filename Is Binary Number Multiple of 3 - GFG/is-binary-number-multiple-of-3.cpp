//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    //complete the function here
	        int n=s.size();
        int sum=0,a;
        reverse(s.begin(),s.end());
        for(int i=0;i<n;i++){
            a=i%2+1;
            if(s[i]=='1'){
                sum=sum+a;
            }
        }
        return !(sum%3);
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends