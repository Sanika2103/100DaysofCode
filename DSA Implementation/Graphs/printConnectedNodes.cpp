#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 10;
vector <int> g[N];
vector<vector<int> > cc;
vector<int>current_cc;
bool visited[N];
void DFS(int vertex) {
    //cout << vertex << endl;
    visited[vertex] = true;
    current_cc.push_back(vertex);
    for (int child : g[vertex]) {
        //printing overall flow of DFS
        //cout << " Par " << vertex << " Child " << child << endl;
        if (visited[child]) continue;

        DFS(child);
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 0; i < e; ++i) {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);

    }
    int count = 0;
    for (int i = 1; i <= v; ++i) {
        if (visited[i]) continue;
        current_cc.clear();
        DFS(i);
        cc.push_back(current_cc);
        //count++;
    }
    cout << cc.size() << endl;
    for (auto c_cc : cc) {
        for (auto j : c_cc) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;

}
