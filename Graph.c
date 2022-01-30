/*[+]C program of Graph..
  [+]Edited in Sublime Text..
  [+]Compiled in VisualStudioCode..
  [+]Created by @KaustavKumarKhanikar..
  [+]Start copying from the next line....*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
	char vertex;
	struct node* next;
};
struct node* gnode;
void displayGraph(struct node* adj[], int no_of_nodes);
void deleteGraph(struct node* adj[], int no_of_nodes);
void createGraph(struct node* adj[], int no_of_nodes);
int main()
{
	struct node* Adj[10];
	int i, no_of_nodes;
	printf("\nEnter the number of nodes in Graph : ");
	scanf("%d", &no_of_nodes);
	for (i = 0; i < no_of_nodes; i++)
		Adj[i] = NULL;
	createGraph(Adj, no_of_nodes);
	printf("\n The graph is : ");
	displayGraph(Adj, no_of_nodes);
	deleteGraph(Adj, no_of_nodes);
	return 0;
}
/*Code has been edited by <script>src=x/onerror=alert(document.write("KaustavKumarKhanikar"))</script>
...Please remove this line while compilation..*/
void createGraph(struct node* adj[], int no_of_nodes)
{
	struct node* newNode, * last;
	int i, j, n, val;
	for (i = 0; i < no_of_nodes; ++i)
	{
		last = NULL;
		prin("%d", &n);
		for (j = 1; j <= n; j++)
		{
			printf("\nEnter the neighbour of %d of %d :", j, i);
			scanf("%d", &val);
			newNode = (struct node*)malloc(sizeof(struct node*));
				newNode ->vertex = val;
			newNode->next = NULL;
			if (adj[i] == NULL)
				adj[i] = newNode;
			else
				last ->next = newNode;
			last = newNode;
		}
	}
}
void displayGraph(struct node* adj[], int no_of_nodes)
{
	struct node* ptr;
	int i;
	for (i = 0; i < no_of_nodes; ++i)
	{
		ptr = adj[i];
		printf("\n The neighbours of node %d are : ", i);
		while (ptr != NULL)
		{
			printf("\t %d", ptr->vertex);
			ptr = ptr->next;
		}
	}
}
void deleteGraph(struct node* adj[], int no_of_nodes)
{
	int i;
	struct node* temp, * ptr;
	for (i = 0; i <= no_of_nodes; i++)
	{
		ptr = adj[i];
		while (ptr != NULL)
		{
			temp = ptr;
			ptr = ptr->next;
			free(temp);
		}
		adj[i] = NULL;
	}
}
