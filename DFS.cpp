#include <iostream>
using namespace std;

int graph[4][4] = {
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
};

bool visited[4] = {false};

void DFS(int node){
    cout << node << " ";
    visited[node] = true;

    for(int i = 0; i < 4; i++){
        if(graph[node][i] == 1 && visited[i] == false){
            DFS(i);
        }
    }
}

int main(){
    cout << "Hasil dari DFS: ";
    DFS(0);
    
    return 0;
}