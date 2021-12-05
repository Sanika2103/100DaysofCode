
#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
vector <int> g[N];
bool visited[N];
void DFS(int vertex) {
    //Take action on vertex after entering the vertex
    cout << vertex << endl;
    visited[vertex] = true;
    for (int child : g[vertex]) {
        
        //printing overall flow of DFS
        cout << " Par " << vertex << " Child " << child << endl;
        if (visited[child]) continue;
        //Take action on child before entering the child node
        DFS(child);
        //Take action on child after exeting the child node
    }
    //Take action on vertex before exeting the vertex
}
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    DFS(v);
    return 0;

}
