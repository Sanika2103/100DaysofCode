#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    while(n--){
        cin>>a;
        if(1<=a && a<100){
         cout<<"Easy\n";
            
        }
         else if(100<= a && a< 200){
         cout<<"Medium\n";
             
         }
         else if(200<=a && a<=300){
        cout<<"Hard\n";
             
         }
    }

    return 0;
}
