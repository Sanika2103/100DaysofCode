#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int N,l,x;
        cin>>N>>l>>x;
        if(N==0 || l==0 || x==0){
            cout<<0<<endl;
        }
        else if((N-l) > l){
            cout<<l*x<<endl;
        }
        else{
            cout<<(N-l)*x<<endl;
        }
    }

    return 0;
}
