//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;


// } Driver Code Ends
//User function Template for Java

class Solution
{
	public static int addMinChar(String str){
		//code here
		  int start=0,end=str.length()-1;
        int temp=end;
        while(start<end){
            if(str.charAt(start)==str.charAt(end)){
                start++; 
            }
            else 
            {
                start=0;
                end=temp;
                temp--;
            }
            end--;
        }
        return str.length()-temp-1;
	}
}

//{ Driver Code Starts.

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0)
        {
        	String str = read.readLine();
            Solution ob = new Solution();
            System.out.println(ob.addMinChar(str));
        }
        
    }
}

// } Driver Code Ends