#include <iostream>

using namespace std;

const int N = 1e3;
int a[N][N];
int main()
{

    int v, e;      // v ->vertices, e -> edges
    cin >> v >> e;

    for (int i = 0; i < e; i++) {
        int m, n;
        cin >> m >> n;
        a[m][n] = 1;
        a[n][m] = 1;
    }
    for (int i = 0; i < v; i++) {
        for (int j = 0; j < v; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

