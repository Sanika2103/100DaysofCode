#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    long int sum =0;
    long int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum;
    return 0;
}
