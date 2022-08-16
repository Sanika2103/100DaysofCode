#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int a;
		cin >> a;
		vector<int>v;
		for (int i = 0; i < a; ++i)
		{
			/* code */
			int x;
			cin >> x;
			v.push_back(x);
		}
		unordered_map<int, int>m;
		for (int i = 0; i < a; ++i)
		{
			/* code */
			m[v[i]]++;
		}
		vector<int>k;
		for (auto i : m)
		{
			/* code */
			k.push_back(i.second);
		}

		sort(k.begin(), k.end(), greater<int>());
		if (k[0] > k[1] || k.size() == 1) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
}
