#include <iostream>

using namespace std;

int main()
{
    int n,m,l,a;
    cin>>n;
    while(n--){
        cin>>m>>l>>a;
        if(l*a <m)
        cout<<"YES"<<endl;
        else if(l*a >m || l*a==m )
        cout<<"NO"<<endl;
       
    }

    return 0;
}
