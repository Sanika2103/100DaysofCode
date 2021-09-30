#include <iostream>

using namespace std;

int main()
{
    int a,n;
    cin>>a;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==a){
            cout<<i;
        }
    }
    
    
    return 0;
}
