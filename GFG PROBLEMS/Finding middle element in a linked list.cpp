 int getMiddle(Node *head)
    {
        // Your code here
        
         int count=1;
       
          Node*temp=head;
          while(temp->next!=NULL){
              count++;
              temp=temp->next;
          }  
             int index=(count/2)+1;
             temp=head;
             count=1;
             while(count<index){
                 temp=temp->next;
                 count++;
             }
             return temp->data;
    }