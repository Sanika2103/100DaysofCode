#include <iostream>

using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    int sum =0;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    int bac = 0;
    for(int i=0;i<n;i++){
    bac = (sum -a[k])/2;
    }
    int bch;
    cin>>bch;
    if(bch==bac){
        cout<<"Bon Appetit";
    }
    else{
      cout<<bch-bac; 
    }
    return 0;
}
