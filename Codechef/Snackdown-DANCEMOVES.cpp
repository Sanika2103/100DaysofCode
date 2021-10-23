#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
        int a,b;
        cin>>a>>b;
        int diff = abs(a-b);
        if(b>a){
        if(diff % 2 == 0){
            cout<< (diff/2) <<endl;
        }
        else{
            int count = (diff/2) + 2;
            cout<< count<<endl;
        }
        }
        else 
        cout<<diff<<endl;
}
    return 0;
}
