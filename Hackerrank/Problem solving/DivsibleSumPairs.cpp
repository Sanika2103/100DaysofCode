#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int count =0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        
        for(int j=0;j<i;j++){
            if((a[i]+a[j])%k==0)
                count++;
            }
    }
    cout<<count;
    return 0;
}
