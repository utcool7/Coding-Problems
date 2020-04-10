https://practice.geeksforgeeks.org/problems/circular-linked-list/1/?track=sp-linked-list&batchId=152
bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)
      return true;
   Node* trav = (Node*)malloc(sizeof(Node));
   trav = head->next;
   while(trav!=NULL)
   {
       if(trav==head)
       {
       return true;
       }
       trav = trav->next;
   }
  
   return false;    
}
