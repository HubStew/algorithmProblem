#include<iostream>
using namespace std;

#define GRAPH_SIZE 1500
int graph[GRAPH_SIZE][GRAPH_SIZE];
bool DFS_Visit[GRAPH_SIZE];
bool BFS_visit[GRAPH_SIZE];

int queue[10000000];
int rear, front;

void print_graph(int size);
void DFS(int vertex, int size);
void BFS(int vertex, int size);

int main()
{
	int vertex_num;
	int edge_num;
	int start_vertex;
	
	int edge1, edge2;

	rear = 0;
	front = 0;

	cin >> vertex_num >> edge_num >> start_vertex;
	for (int i = 0; i < edge_num; i++)
	{
		cin >> edge1 >> edge2;
		graph[edge1][edge2] = 1;
		graph[edge2][edge1] = 1;
	}

	//print_graph(vertex_num);
	DFS(start_vertex, vertex_num);
	cout << endl;
	BFS(start_vertex, vertex_num);
	cout << endl;

	return 0;
}

void print_graph(int size)
{
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
			cout << graph[i][j] << " ";
		cout << endl;
	}
}

void DFS(int vertex, int size)
{
	DFS_Visit[vertex] = true;

	cout << vertex << " ";
	for (int i = 1; i <= size; i++)
	{
		if (graph[vertex][i] == 1 && DFS_Visit[i] == false)
		{
			DFS(i, size);
		}
	}	
}

void BFS(int vertex, int size)
{
	
	BFS_visit[vertex] = true;

	cout << vertex << " ";
	queue[rear++] = vertex;

	while(front < rear)
	{
		vertex = queue[front++];

		for (int i = 1; i <= size; i++)
		{
			
			if (graph[vertex][i] == 1 && BFS_visit[i] == false)
			{
				cout << i << " ";
				BFS_visit[i] = true;
				queue[rear++] = i;
			}
		}
	}
}