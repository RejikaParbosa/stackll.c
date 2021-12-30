#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

struct node
{
	int data;
	struct node *next;
}*top;

push()
{
	int data;
	struct node *temp;
	temp=malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&data);
	temp->data=data;
	temp->next=top;
	top=temp;
}

pop()
{
	struct node *temp;
	temp=malloc(sizeof(struct node));
	if(top==NULL)
	{
		printf("Stack underflow.\n");
		return 0;
	}
	temp=top;
	printf("Element to be popped out is %d\n",temp->data);
	top=temp->next;
	free(temp);
	
}


display()
{
		struct node *q;
        q=malloc(sizeof (struct node));
        if(top==NULL)
        {
                printf("List is empty \n");
        }
        q=top;
        printf("List is:\n");
        while(q!=NULL)
        {
                printf("%d\n",q->data);
                q=q->next;
        }
}
		



int main()
{
	int choice;
	while(1)
	{
		printf("1.Push \n");
		printf("2.Pop \n");
		printf("3.Display \n");
		printf("4.Quit \n");
		printf("Enter your choice:");
		scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                push();
                                break;
                        case 2:
                                pop();
                                break;
                        case 3:
                                display();
                                break;
                        case 4:
                                exit(1);
                                break;
                         default:
                                printf("Please enter a valid choice");
                }
      }
}
