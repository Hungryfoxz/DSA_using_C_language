/*[+]C program of Graph..
  [+]Edited in Sublime Text..
  [+]Compiled in VisualStudioCode..
  [+]Created by @KaustavKumarKhanikar..
  [+]Start copying from the next line....*/

//Implementation of queue using the stack structure ...
#include<stdio.h>
#define MAX 10
//Creation of the fuction ..
void enter();
void delete();
void display();
//Creation of global variable..
int front = 0;
int rear = 0;
int q_array[MAX];
//Main function..
void main()
{
	int data;
	while (1)//it will carry on basiclly till the while condition is true..
	{
		printf("\n1..EnQueue Operation ..");
		printf("\n2..DeQueue Operation ..");
		printf("\n3..Display Data ..");
		printf("\n4..Exit ..\n");
		scanf_s("                  %d", &data);
		switch (data)
		{
		case 1:enter();
			break;
		case 2:delete();
			break;
		case 3:display();
			break;
		case 4:exit(1);
		default:printf("\nInvalid option !");
			break;
		}
	}
}
//creation of void function..
void enter()
{
	int val;
	if (rear == (MAX - 1))
	{
		printf("\nQueue Overflow ..");
	}
	printf("\nEnter the value to be inserted in the Queue: ");
	scanf_s("%d", &val);
	q_array[rear] = val;
	rear++;
}
void delete()
{
	int temp;
	if (front > rear)
	{
		printf("\nQueue Underdflow ..");
	}
	temp = q_array[front];
	printf("\nThe deleted element is : %d \n", temp);
	front++;
	printf("\n");
}
void display()
{
	int temp = front;
	if (rear <= front)
	{
		printf("\n The queue is empty .\n");
	}
	while (temp < rear )
	{
		printf("\n %d \t", q_array[temp]);
		temp++;
	}
	printf("\n");
}
//code created by KaustavKumarKhanikar...Remove this line during compilation for your use...
