#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a,b,c;
   while(n--){
       cin>>a>>b>>c;
       if(a==7 || b==7 || c==7){
           cout<<"YES"<<endl;
       }
       else
       cout<<"NO"<<endl;
   }
   return 0;
}
