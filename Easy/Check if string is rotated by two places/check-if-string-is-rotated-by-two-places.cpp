//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to check if a string can be obtained by rotating
    //another string by exactly 2 places.
    bool isRotated(string str1, string str2)
    {
        // Your code here
        if(str1.length()!=str2.length()) {return false;}
        if(str1.length() && str2.length()==1) {return str1[0]==str2[0];}
        int n=str1.length();
        if((str1[0]==str2[2] &&str1[1]==str2[3]) || 
        (str1[0]==str2[n-2] && str1[1]==str2[n-1]))
            { return true;}
       return false;
        
    }

};


//{ Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		Solution obj;
		cout<<obj.isRotated(s,b)<<endl;
	}
	return 0;
}

// } Driver Code Ends