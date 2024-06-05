#include<iostream>
#include<stdlib.h>
using namespace std;

// Node dalam adjacency list
typedef struct AdjListNode {
	int dest;
	struct AdjListNode* next;
} AdjListNode;

// Adjacency list
typedef struct AdjList {
	struct AdjListNode *head;
} AdjList;

// Graph
typedef struct Graph {
	int V;
	struct AdjList* array;
} Graph;

AdjListNode* newAdjListNode(int dest);
Graph* createGraph(int V);
void addEdge(Graph* graph, int src, int dest);
void printGraph(Graph* graph); 
