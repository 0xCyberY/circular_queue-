#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front=-1,rear=-1,count=0;
void insertCQ(int circularQ[])
{
   int item;
   if(count >= MAX)
   {
	printf("\n Queue is full \n");
	return;
   }
   else
   {
	if(front == -1)
	front = 0;
	rear = (rear + 1) % MAX;
	printf("\n Enter the element to be inserted : ");
	scanf("%d",&item);
	circularQ[rear] = item;
	count++;
   }
}
void deleteCQ(int circularQ[])
{
   if(count == 0)
	printf("\n Queue is empty \n");
   else
   {
	printf("\n Deleted item is %d \n",circularQ[front]);
	front = (front + 1) % MAX;
	count--;
   }
}
void display(int circularQ[])
{
int i,pos;
   if(count == 0)
	printf("\n Queue is empty \n");
   else
   {
	pos = front;
	printf("The elements in the queue are : \n ");
	for(i = 0;i < count;i++)
	{
	    printf("\n %d \n",circularQ[pos]);
	    pos = (pos + 1) % MAX;
	}
    }
}
void main()
{
int CQueue[MAX],ch;
while(1)
{
printf("\nCIRCULAR QUEUE IMPLEMENTATION\n");
printf("\n1) Insert\n2) Delete\n3) Display\n4) Exit\n Pleaseenter the choice: \n");
scanf("%d",&ch);
   switch(ch)
   {
	case 1: insertCQ(CQueue);
	break;
	case 2: deleteCQ(CQueue);
	break;
	case 3: display(CQueue);
	break;
	case 4: exit(0);
	break;
	default: printf("\nPlease enter the correctchoice\n");
   }
}
}
