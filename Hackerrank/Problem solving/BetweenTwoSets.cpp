#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int max = INT_MIN;
    int a[n],b[m];
    int i;
    for(i=0;i<n;i++){
       cin>>a[i];
       if(a[i]>max)
       max = a[i];
       }
     for(i=0;i<m;i++){
          cin>>b[i];
          if(b[i]>max)
          max = b[i];
      }
    for(i=0;i<m;i++){
      if(i%a[i]==0){
          
      }
      
    }   

    return 0;
}
