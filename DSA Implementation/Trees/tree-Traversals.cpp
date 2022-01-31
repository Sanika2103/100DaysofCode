
#include <iostream>
#include <vector>
using namespace std;
const int N = 1e5 + 7;
vector <int>g;

void dfs(int vertex) {
	// take action on vertex after entering the vertex


	for (int child : v1[vertex]) {
		//take action on child before entering that child node
		if (vis[child]) continue;
		dfs(child);

		// take action on child after exiting the child
	}
	// take action on vertex after exiting the vertex
}
int main() {
	int v, e;
	cin >> v >> e;
	for (int i = 0; i < e; i++) {
		int v1, v2;
		cin >> v1 >> v2;
		g[v1].push_back(v2);
		g[v2].push_back(v1);
	}
	dfs(1);

	return 0;
}
