#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[5];
    while(n--){
      int d=0,in=0,en=0;
      for(int i=0;i<5;i++){
          cin>>a[i];
          if(a[i]==0)
           d++;
          else if(a[i]==1)
           in++;
          else if(a[i]==2)
           en++;
        } 
      
     if(in>en){
       cout<<"INDIA"<<endl;
          
      }
     else if(en>in){
       cout<<"ENGLAND"<<endl;
          
      }
      else {
       cout<<"DRAW"<<endl;
          
      }
      }
    return 0;
}
