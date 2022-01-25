//Stack implementation using array in C..
//Code edited in Sublime Text..
//Code compiled in MicrosoftVisualStudioCode..
//Code edited by @KaustavKumarKhanikar..
//Copy from the next line..

#include<stdio.h>
#include<conio.h>

void push();
void pop();
void display();
int TOP = -1;
int stack[10];
int n;
int main(){
	int choice;
	printf("\nEnter the options from below to perform :\n");
	printf("\n **************************************\n");
	printf("Enter the no of elements to be entered in the stack (MAX size is 10):\n");
	scanf("%d",&n);
	printf("\n1..Push Data into stack :\n2..Pop Data from the stack :\n3..Display the stack :");
	scanf("%d",&choice);
	do
	{
		switch(choice)
	    {
		case 1:{
			push();
			   break;
			}
		case 2:{
			pop();
			   break;
			}
		case 3:{
			display();
		       break;
		   }
		case 4:{
			printf("\n Exit point ..*");
		       break;
		   }
		default : printf("\n*invalid option !!!!");
		}
	}while(choice!=4);
	getch();
}
 void push()
 {
 	if(TOP == n-1)
 		printf("OverFlow!!!");
 	else
 	{   int element;
 		TOP = TOP + 1;
 		printf("\nEnter the element to PUSH :\n");
 		scanf("%d",&element);
 		stack[TOP] == element;
 	}
 }
 void pop()
 {
 	if (TOP == -1)
 		printf("\nUnderflow !!!\n");
 	else
 	{
 		int popped = stack[TOP];
 		printf("\nThe element popped out is :",popped);
 		TOP = TOP-1;
 	}
 }
 void display()
 {
 	if (TOP == -1)
 		printf("UnderFlow :");
 	else
 	{   printf("\nThe elements are :");
 		while(TOP>-1)
 		{
 			pritnf("\n",stack[TOP]);
 			TOP--;
 		}
 	}
 }
