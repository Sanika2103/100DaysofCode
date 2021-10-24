#include <bits/stdc++.h>
//#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int m;
        cin>>m;
        int a[m];
        for(int i=0;i<m;i++){
            cin>>a[i];
            }
            sort(a,a+m);
            int mid=m/2;
            int count= m-mid-1;
            for(int i=0;i<=mid;i++){
            if(a[i]==a[mid]){
            count++;
            }
                
            }
        cout<<count<<endl;
}
    return 0;
}
