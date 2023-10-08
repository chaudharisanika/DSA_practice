//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        string ans;
        int max1=INT_MIN;
        int max2=INT_MIN;
        unordered_map<string,int>mp;
        for (int i=0;i<n;i++) {
            mp[arr[i]]++;
            if ( mp[arr[i]]>max1) {
                max1= mp[arr[i]];
            }
        }
        
        for (auto m:mp) {
            if (m.second>max2 && m.second<max1) {
                ans=m.first;
                max2=m.second;
            }
        }
        return ans;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends