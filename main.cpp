#include "header.h"

int main() {
    int V = 5;
    int cari << tujuan;
    int baru1, baru2;
    Graph* graph = createGraph(V);
    
    for (int i = 0; i < V; ++i) {
        cout << "Masukkan vertex1: ";
        cin >> baru1;
        cout << "Masukkan vertex2: ";
        cin >> baru2;
        addEdge(graph, baru1, baru2);
    }
    
    // Print adjacency list representation of the graph
    printGraph(graph);
    cout << "Masukkan vertex yang ingin dicari: ";
                cin >> cari;
                cout << "Masukkan vertex tujuan: ";
                cin >> tujuan;
                if (hasEdge(graph, cari, tujuan)) {
                    cout << "Edge dari " << cari << " ke " << tujuan <<" ada "<< endl;
                } else {
                    cout << "Edge dari  " << cari << " ke " << tujuan <<" tidak ada "<< endl;
                }
    return 0;
}

