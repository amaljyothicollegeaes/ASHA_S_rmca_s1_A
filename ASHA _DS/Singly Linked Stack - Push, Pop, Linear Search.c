#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
void search();
struct node
{
int val;
struct node *next;
};
struct node *head;

void main ()
{
 int choice=0;
 printf("\n*********STACK OPERATIONS*********\n");
 printf("\n----------------------------------------------\n");
 while(choice != 4)
 {
 printf("\n\choose one from the below options...\n");
 printf("\nPush:1\nPop:2\nDisplay:3\nExit:4");
 printf("\n Enter your choice \n");
 scanf("%d",&choice); 
 switch(choice)
 {
 case 1:
 {
 push();
 break;
 }
 case 2:
 {
 pop();
 break;
 }
 case 3:
 {
 display();
 break;
 }
 case 4:
 {
 search();
 break;
 }

 case 5:
 {
 printf("Exiting....");
 break;
 }
 default:
 {
 printf("Please Enter valid choice "); 
 }
 };
}
}
void push ()
{
 int val;
 struct node *ptr = (struct node*)malloc(sizeof(struct node));
 if(ptr == NULL)
 {
 printf("not able to push the element");
 }
 else
 {
 printf("Enter the value:");
 scanf("%d",&val);
 if(head==NULL)
 {
 ptr->val = val;
 ptr -> next = NULL;
 head=ptr;
 }
 else
 {
 ptr->val = val;
 ptr->next = head;
 head=ptr;

 }
 printf("Item Inserted");
 
 }
}

void pop()
{
 int item;
 struct node *ptr;
 if (head == NULL)
 {
 printf("Underflow");
 }
 else
 {
 item = head->val;
 ptr = head;
 head = head->next;
 free(ptr);
 printf("Item Deleted");

 }
}
void display()
{
 //int i;
 struct node *ptr;
 ptr=head;
 if(ptr == NULL)
 {
 printf("Stack is empty\n");
 }
 else 
 {
 printf("Printing Stack elements \n");
 while(ptr!=NULL)
 {
 printf("%d\n",ptr->val);
 ptr = ptr->next;
 }
 }
}
void search()
{
 struct node *ptr;
 int item,i=0,flag;
 ptr = head;
 if(ptr == NULL)
 {
 printf("\nEmpty List\n");
 }
 else
 {
 printf("\nEnter item which you want to search?\n");
 scanf("%d",&item);
 while (ptr!=NULL)
 {
 if(ptr->val == item)
 {
 printf("item found at location %d ",i+1);
 flag=0;
 }
 else
 { 
 flag=1;
 }
 i++;
 ptr = ptr -> next;
 }
 if(flag==1)
 {
 printf("Item not found\n");
 }
 }

} 