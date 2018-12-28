#include <stdio.h>
#include<stdlib.h>
#define size 5
struct cqueue
{
	int item[size];
	int front,rear;
}cq;
void enqueue(struct cqueue *cq,int num)
{
	if((cq->rear+1)%size==cq->front)
	{
		printf("\nQueue is full");
	}
	else
	{
		cq->rear=(cq->rear+1)%size;
		cq->item[cq->rear]=num;
	}
}
void dequeue(struct cqueue *cq)
{
	int dt;
	if(cq->front==cq->rear)
	{
		printf("\n Queue is empty");
	}
	else
	{
		cq->front=(cq->front+1)%size;
		dt=cq->item[cq->front];
		printf("\nDeleted item = %d",dt);
	}
}
void display(struct cqueue *cq)
{
	int i;
		if(cq->front==cq->rear)
	{
		printf("\n Queue is empty");
	}
	else
	{
		printf("\nContent of queue is:");
		for(i=(cq->front+1)%size;i!=cq->rear;i=(i+1)%size)
		{
			printf("%d\t",cq->item[i]);
		}
		printf("%d",cq->item[cq->rear]);
	}
	
}
int main()
{
	int num,choice;
	cq.front=size-1;
	cq.rear=size-1;
	printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit");
	while(1)
	{
		printf("\nEnter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nEnter the number:");
				scanf("%d",&num);
				enqueue(&cq,num);
				break;
			case 2:
				dequeue(&cq);
				break;
			case 3:
				display(&cq);
				break;
			case 4:
				exit(0);
		}
	}
}
