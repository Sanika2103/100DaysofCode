#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
vector<int> g[N];
bool visited[N];

bool isCycle(int vertex, int parent) {
    visited[vertex] = true;
    bool isLoopExists = false;
    for (auto child : g[vertex]) {
        if (visited[child] && child == parent) continue;
        if (visited[child]) return true;

        isLoopExists |= isCycle(child, vertex);
    }
    return isLoopExists;
}

int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; i++) {
        int v1, v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bool isLoopExists = false;
    for (int i = 1; i <= v; ++i) {
        if (visited[i]) continue;
        if (isCycle(i, 0)) {
            isLoopExists = true;
            break;
        }
    }
    cout << isLoopExists << endl;
}
