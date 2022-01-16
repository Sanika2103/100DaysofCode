#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a, x;
        cin >> a >> x;
        int sum = 0;
        int m[a];
        for (int i = 0; i < a; ++i) {
            cin >> m[i];
        }
        sort(m, m + a, greater<int>());
        for (int i = 0; i < a; ++i) {
            sum += m[i];
            if (sum >= x) {
                cout << i + 1 << endl;
                break;
            }
        }

        if (sum < x) cout << -1 << endl;


    }
    return 0;
}
