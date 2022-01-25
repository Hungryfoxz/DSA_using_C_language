/*[+]C program of stack using linked list..
  [+]Edited in Sublime Text..
  [+]Compiled in VisualStudioCode..
  [+]Created by @KaustavKumarKhanikar..
  [+]Start copying from the next line....*/
  
  #include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
void push();
void pop();
void display();
struct node
{
	int data;
	struct node* next;
};
struct node* top = NULL;
void main()
{
	int choice;
	while (1)
	{
		printf("\n1..Push operation ..\n");
		printf("2..Pop operation ..\n");
		printf("3..Display the data's ..\n");
		printf("4..Exit ..\n");
		scanf_s(" %d", &choice);
		switch (choice)
		{
		case 1:push();
			break;
		case 2:pop();
			break;
		case 3:display();
			break;
		case 4:exit(1);
		default: printf("\n Enter an option mentioned above..");
			break;
		}
	}
}
void push()
{
	struct node* ptr;
	int item;
	ptr = (struct node*)malloc(sizeof(struct node));
	printf("\nEnter the value to enter into stack ... : ");
	scanf_s(" %d", &item );
	ptr ->data = item;
	ptr ->next = top;
	top = ptr;
}
void pop()
{
	struct node* ptr;
	if (top == NULL)
	{
		printf("\n The stack is empty ..\n");
	}
	else
	{
		ptr = top;
		printf("\n The element popped out is : %d \n", ptr->data);
		top = top->next;
		free(ptr);

	}
}
void display()
{
	struct node* ptr;
	ptr = top;
	if (ptr == NULL)
		printf("\nStack Empty ..");
	while (ptr != NULL)
	{
		printf("\n%d", ptr->data);
		ptr = ptr->next;
	}
	printf("\n\n");
}
