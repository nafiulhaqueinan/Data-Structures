#include<bits/stdc++.h>
using namespace std;
struct Node
{
   int data;
   struct Node *next;
}*top = NULL;
struct stuck{
void push(int value)
{
   struct Node *newNode;
   newNode = (struct Node*)malloc(sizeof(struct Node));
   newNode->data = value;
   if(top == NULL)
      newNode->next = NULL;
   else
      newNode->next = top;
   top = newNode;
   cout<<"Inserted !"<<endl;
}
void pop()
{
   if(top == NULL)
      cout<<"Stack is empty!"<<endl;
   else{
      struct Node *temp = top;
      cout<<"Deleted Element :"<<temp->data<<endl;
      top = temp->next;
      free(temp);
   }
}
void display()
{
   if(top == NULL)
    cout<<"stack is empty!"<<endl;
   else{
      struct Node *temp = top;
      while(temp->next != NULL){
        cout<<"->"<<temp->data;
        temp = temp -> next;
      }
        cout<<"->"<<temp->data<<"->Null->"<<endl;
   }
}
};



int main()
{
   stuck s;
    s.push(10);
    s.push(10);
    s.push(10);
    s.display();

}
