//{ Driver Code Starts
// driver code

#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void loopHere(Node* head, Node* tail, int position)
{
    if(position==0) return;
    
    Node* walk = head;
    for(int i=1; i<position; i++)
        walk = walk->next;
    tail->next = walk;
}

bool isLoop(Node* head)
{
    if(!head) return false;
    
    Node* fast = head->next;
    Node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}

int length(Node* head)
{
    int ret = 0;
    while(head)
    {
        ret++;
        head = head->next;
    }
    return ret;
}

bool notOriginal(Node *head, unordered_map<Node *, int>&myMap){
    
    while(head){
        if(myMap.find(head)==myMap.end()) return true;
        if(myMap[head] != (head->data)) return true;
        
        head=head->next;
    }
}




// } Driver Code Ends
/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        // Node*p=head;
        // Node*q=head;
        // do{
        //     p=p->next->next;
        //     q=q->next;
            
        // }while(p!=q);
        // p=head;
        //     while(p->next!=q->next)
        //     {
        //         p=p->next;
        //         q=q->next;
        //     }
        //     q->next=NULL;
        //   if(head==NULL || head->next==NULL)
        // return;
        // if(head->next==head)
        // {
        //     head->next=NULL;
        //     return;
        // }
        //   Node* slow=head;
        // Node* fast=head;
        
        // do{
        //     slow=slow->next;
        //     fast=fast->next->next;
        // }
        // while(slow!=fast);
        // {
            
        //     fast=head;
        //     while(slow->next!=fast->next)
        //     {
        //   slow=slow->next;
        //   fast=fast->next;            
        // }
        //             slow->next=NULL;
        //             return;
        // }
        
        Node*p=head;
        Node*q=head;
        while(p!=NULL&&p->next!=NULL)
        {
            q=q->next;
            p=p->next->next;
            if(p==q)
            {
                q=head;
                while(p!=q)
                {
                    p=p->next;
                    q=q->next;
                }
                while(p->next!=q)
                {
                    p=p->next;
                }
                p->next=NULL;
                return;
            }
        }
    return;
            
            
        
        
        // return head;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unordered_map<Node *, int>myMap;
        
        int n, num;
        cin>>n;
        
        Node *head, *tail;
        cin>> num;
        head = tail = new Node(num);
        
        myMap[head]=num;
        
        for(int i=0 ; i<n-1 ; i++)
        {
            cin>> num;
            tail->next = new Node(num);
            tail = tail->next;
            myMap[tail]=num;
        }
        
        int pos;
        cin>> pos;
        loopHere(head,tail,pos);
        
        Solution ob;
        ob.removeLoop(head);
        
        if( isLoop(head) || length(head)!=n || notOriginal(head, myMap))
            cout<<"0\n";
        else
            cout<<"1\n";
    }
	return 0;
}

// } Driver Code Ends