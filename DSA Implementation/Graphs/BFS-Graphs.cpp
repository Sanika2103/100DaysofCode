#include <bits/stdc++.h>
using namespace std;


vector <int> bfsTrav(int v, vector <int>adj[]) {
	vector<int> vis(v + 1, 0);
	vector<int>bfs;
	queue <int>q;
	for (int vertex = 1; vertex < v; vertex++) {

		if (!vis[vertex]) {
			q.push(vertex);
			vis[vertex] = 1;
			while (!q.empty()) {
				int node = q.front();
				q.pop();
				bfs.push_back(node);
				for (auto x : adj[node]) {
					if (!vis[x]) {
						q.push(x);
						vis[x] = 1;
					}
				}
			}

		}
	}

	return bfs;
}

int main() {
	int v, e;
	cin >> v >> e;
	vector <int>adj[v];
	for (int i = 1; i < e; i++) {
		int n, m;
		cin >> n >> m;
		adj[n].push_back(m);
		adj[m].push_back(n);

	}
	
	vector<int>final = bfsTrav(v, adj);
	for (int i = 0; i < v; i++) {
		cout << final[i] << " ";
	}

	return 0;
}
