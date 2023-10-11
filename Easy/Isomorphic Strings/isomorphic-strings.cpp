//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int n1 = str1.length();
        int n2 = str2.length();
        int i;
        if(n1!=n2){
            return false;
        }
        int count[256] = {0},count_1[256] = {0};
        for(i=0;i<n1;i++){
            count[str1[i]] = count[str1[i]] + i + 1 ;
            count_1[str2[i]] = count_1[str2[i]] + i + 1;
        }
        for(i=0;i<n1;i++){
            if(count[str1[i]] != count_1[str2[i]]){
                return false;
            }
            
        }
        return true;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends