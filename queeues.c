#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
		int data;
		struct node *link;
}queeue;

void insert(int data, queeue **front_arg, queeue **rear_arg)
{
		queeue *new = malloc(sizeof(queeue));
		if(new == NULL)
		{
				printf("Memory is not allocated\n");
		}
		else
		{
				new->data = data;
		        new->link = NULL;
				if(*front_arg == NULL && *rear_arg == NULL)
				{
						*front_arg = new;
						*rear_arg = new;
				}
				else
				{
						(*rear_arg)->link = new;
						*rear_arg = new;
				}
				printf("Enqueeued element is %d\n", (*rear_arg)->data);
		}
}

int main()
{
		queeue *rear = NULL, *front = NULL;
		insert(10, &front, &rear);
		insert(20, &front, &rear);
		insert(30, &front, &rear);
}
