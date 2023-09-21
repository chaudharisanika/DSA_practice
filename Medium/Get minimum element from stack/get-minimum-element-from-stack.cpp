//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
     stack<int>st;
     
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
          stack<int> s1;
            
            if(s.empty()){
                return -1;
            }
        
            s1 = s;
        
            int min = s1.top();
        
            s1.pop();
            while(!s1.empty()){
                if(min > s1.top()){
                    min = s1.top();
                    s1.pop();
                }
                else{
                    s1.pop();
                }
            }
        
            return min;
	}
	
       
       /*returns poped element from stack*/
       int pop(){
           
         if(s.empty()){
               return -1;
           }
           int temp = s.top();
           s.pop();
           
           return temp;
           
           //Write your code here
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
           s.push(x);
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends