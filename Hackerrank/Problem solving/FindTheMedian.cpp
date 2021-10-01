#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int m = sizeof(a)/sizeof(a[0]);
    int i;
    for(i=0;i<n;i++){
       cin>>a[i];
       }
    sort(a,a+m);
    int median = m/2;
    cout<<a[median];
    
    return 0;
}
