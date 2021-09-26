#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int left=0,right=0,diff=0;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j = 0; j < n; j++){
            if ((i + j) == (n - 1))
            left+=a[i][j];
        }
        
    }
    cout<<endl;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i==j)
           right+=a[i][j];
       }
    }
    diff= right - left;
    cout<<abs(diff);
    return 0;
}
