//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		
         int minr=0;
         int minc=0;
         int maxr=n-1;
         int maxc=m-1;
         int cnt=0;
         while(minr<=maxr&&minc<=maxc)
         {
             //right
             for(int i=minc;i<=maxc;i++)
             {
                 int x=a[minr][i];
                 cnt++;
                 //cout<<x<<" "<<cnt<<endl;
                 if(cnt==k)
                 return x;
             }
             minr++;
             //down
             for(int i=minr;i<=maxr;i++)
             {
                  int x=a[i][maxc];
                 cnt++;
                 //cout<<x<<" "<<cnt<<endl;
                  if(cnt==k)
                 return x;
             }
             maxc--;
             //left
             for(int i=maxc;i>=minc;i--)
             {   
                  int x=a[maxr][i];
                 cnt++;
                 //cout<<x<<" "<<cnt<<endl;
                 if(cnt==k)
                 return x;
             }
             maxr--;
             //upper
             for(int i=maxr;i>=minr;i--)
             {
                  int x=a[i][minc];
                 cnt++;
                 //cout<<x<<" "<<cnt<<endl;
                 if(cnt==k)
                 return x;
             }
             minc++;
    }
    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends