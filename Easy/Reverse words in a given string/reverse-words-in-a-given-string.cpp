//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        string ans="";
        string temp = "";
        stack<string>st;
        
        for(int i=0; i<S.size(); i++){
            if(S[i]!='.'){
                temp+=S[i];
            }
            else {
                st.push(temp);
                temp="";
            }
        }
       st.push(temp);
       while(st.size()>0)
       {
           if(st.size()>1)
           {
               ans+=st.top()+'.';
           }
           else
           {
               ans+=st.top();
           }
           st.pop();
       }
       return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends