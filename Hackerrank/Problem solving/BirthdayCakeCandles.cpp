#include <bits/stdc++.h>

using namespace std;

int main()
{
        int n;
        int temp=0;
        int max = INT_MIN;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>max){
                max = a[i];
            }
            }
        for(int i=0;i<n;i++){
            if(a[i]==max){
                temp++;
            }
            }  
            cout<<temp;
        return 0;
}
