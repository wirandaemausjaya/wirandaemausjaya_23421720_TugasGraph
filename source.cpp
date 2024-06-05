#include "header.h"
// Fungsi untuk membuat node baru dalam adjacency list
AdjListNode* newAdjListNode(int dest) {
	AdjListNode* newNode = (AdjListNode*)malloc(sizeof(AdjListNode));
	newNode->dest = dest;
	newNode->next = NULL;
	return newNode;
}

// Fungsi untuk membuat graph dengan V vertex
Graph* createGraph(int V) {
	Graph* graph = (Graph*)malloc(sizeof(Graph));
	graph->V = V;
	// Buat array dari adjacency list
	graph->array = (AdjList*)malloc(V * sizeof(AdjList));
	// Inisialisasi setiap adjacency list dengan NULL
	for (int i = 0; i < V; ++i) {
		graph->array[i].head = NULL;
	}
	return graph;
}

// Fungsi untuk menambahkan edge ke graph
void addEdge (Graph* graph, int src, int dest) { // Tambahkan edge dari src ke dest
	AdjListNode* newNode = newAdjListNode(dest);
	newNode->next = graph->array[src].head;
	graph->array[src].head = newNode;
	// Jika graph tidak berarah, tambahkan juga edge dari dest ke src
	newNode = newAdjListNode(src);
	newNode->next = graph->array [dest].head;
	graph->array [dest].head = newNode;
}

// Fungsi untuk mencetak representasi adjacency list dari graph
void printGraph(Graph* graph) {
	for (int v = 0; v < graph->V; ++v) {
		AdjListNode* pCrawl = graph->array [v].head;
		cout<<endl;
		cout<<"Adjacency list dari vertex "<<v<<" head";
		while (pCrawl) {
			cout<<"-> "<<pCrawl->dest;
			pCrawl = pCrawl->next;
		}
		cout<<endl;
	}
}

int hasEdge(Graph* graph, int src, int dest) {
    AdjListNode* pCrawl = graph->array[src].head;
    while (pCrawl != nullptr) {
        if (pCrawl->dest == dest) {
            return 1; 
        }
        pCrawl = pCrawl->next; 
    }
    return 0; 
}
