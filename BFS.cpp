#include <iostream>
#include <queue>
using namespace std;

int graph[4][4] = {
    {0,1,1,0},
    {1,0,0,1},
    {1,0,0,1},
    {0,1,1,0}
};

void BFS(int start){
    bool visited[4] = {false};
    queue<int> queue;

    visited[start] = true;
    queue.push(start);

    while(!queue.empty()){
        int node = queue.front();
        queue.pop();

        cout << node << " ";

        for(int i = 0; i < 4; i++){
            if(graph[node][i] == 1 && !visited[i]){
                visited[i] = true;
                queue.push(i);
            }
        }
    }
}

int main(){
    cout << "Hasil dari BFS: ";
    BFS(0);

    return 0;
}