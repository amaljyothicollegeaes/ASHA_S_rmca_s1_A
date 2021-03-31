#include <stdio.h>
#include<stdlib.h>

# define max 6
int queue[max];
void Insert(int element);
int delete();
void display ();
void search ();
int front=-1;
int rear=-1;
int main ()
{
 int choice=0,x;
 while (choice!=5)
 {
 printf("\n Press 1: Insert an element");
 printf("\nPress 2: Delete an element");
 printf("\nPress 3: Display the element");
 printf("\nPress 4:search an element");
 printf("\nPress 5: exit");
 printf("\nEnter your choice");
 scanf("%d", &choice);

 switch(choice)
 {

 case 1:

 printf("Enter the element which is to be inserted"); 
 scanf("%d", &x);
 Insert(x);
 break;
 case 2:
 delete();
 break;
 case 3:
 display();
 case 4:
 search();
 break;
 case 5:
 exit(1);
 default:
 printf("Wrong choice \n");

 };

 }
 return 0;
}
void Insert(int element)
{
 if(front==-1 && rear==-1) // condition to check queue is empty
 {
 front=0;
 rear=0;
 queue[rear]=element;
 } 
 else if((rear+1)%max==front) // condition to check queue is full
 {
 printf("Queue is overflow..");
 }
 else
 {
 rear=(rear+1)%max; // rear is incremented
 queue[rear]=element; // assigning a value to the queue at the rear position.
 }
}

// function to delete the element from the queue
int delete()
{
 if((front==-1) && (rear==-1)) // condition to check queue is empty
 {
 printf("\nQueue is underflow..");
 }
else if(front==rear)
{
 printf("\nThe dequeued element is %d", queue[front]);
 front=-1;
 rear=-1;
}
else
{
 printf("\nThe dequeued element is %d", queue[front]);
 front=(front+1)%max;
}
}
// function to display the elements of a queue 
void display()
{
 int i=front;
 if(front==-1 && rear==-1)
 {
 printf("\n Queue is empty..");
 }
 else
 {
 printf("\nElements in a Queue are :");
 while(i<=rear)
 {
 printf("%d,", queue[i]);
 i=(i+1)%max;
 }
 }
}
void search()
{
 int num;

 int i=front;
 if(front==-1 && rear==-1)
 {
 printf("\n Queue is empty..");
 }
 else
 {
 printf("\nEnter the element to be searched:");
 scanf("%d",&num);
 while(i<=rear) 
 { if(queue[i]==num)
 {
 printf("element found");
 }
 else
 i=(i+1)%max;
 }
 printf("element not found");
 }
}