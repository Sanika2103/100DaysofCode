#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int a1, b1, c1, a2, b2, c2;
        cin >> a1 >> b1 >> c1;
        cin >> a2 >> b2 >> c2;
        int sum1 = a1 + b1 + c1;
        int sum2 = a2 + b2 + c2;
        if (sum1 > sum2) cout << "DRAGON\n";
        else if (sum1 == sum2) {
            if (a1 > a2) cout << "DRAGON\n";
            else if (a1 == a2 && b1 != b2 ) {
                if (b1 > b2) cout << "DRAGON\n";
                else cout << "SLOTH\n";
            }
            else if (a1 == a2 && b1 == b2) cout << "TIE\n";
            else cout << "SLOTH\n";
        }
        else cout << "SLOTH\n";
    }
    return 0;
}
