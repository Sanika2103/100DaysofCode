#include <bits/stdc++.h>


using namespace std;

int main()
{
    long a[5];
    long max = 0;
    long min = 0;
    for(int i=0;i<5;i++){
        cin>>a[i];
        }
    int n = sizeof(a)/sizeof(a[0]);
    sort(a,a+n);
    for(int i=0;i<4;i++){
        min+=a[i];
    }
    for(int i=1;i<5;i++){
        max+=a[i];
    }
    cout<<min<<" "<<max;
    return 0;
}
