#include<conio.h>
#include<stdio.h>
void print_graph(int adj[20][20], int n);
void read_graph(int a[20][20], int n);
int main()
{
    printf("program to represent a undirected grapg using adjacency matrix\n");
    int adj[20][20];
    read_graph(adj, 20);
    getch();
    return 0;
}
void read_graph(int adj[20][20], int N)
{
    int i, j;
    int n;
    printf("Enter number of vertices\n");
    scanf("%d", &n);
    for (i = 1;i <= n;i++) {
        for (j = 1;j <= n;j++) {
            if (i == j) {
                adj[i][j] = 0;
                continue;
            }
            printf("is there edge from vertex %d to %d then enter 1 otherwise 0\n", i, j);
            scanf("%d", &adj[i][j]);
        }
    }
    printf("The adjacency matrix representation of graph\n");
    print_graph(adj, n);
}
void print_graph(int adj[20][20], int n)
{
    int i, j;
    for (i = 1;i <= n;i++)
    {
        for (j = 1;j <= n;j++)
        {
            printf("%d ", adj[i][j]);
        }
        printf("\n");
    }
}