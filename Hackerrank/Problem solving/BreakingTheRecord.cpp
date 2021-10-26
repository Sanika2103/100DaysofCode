#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    int a[n];
    
    int cmax=0,cmin=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
       }
    int max = a[0];
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            cmax++;
            max = a[i];
        }
        else if(a[i]<min){
          cmin++;
          min = a[i];
        }    
    }
    cout<<cmax<<" "<<cmin;
    return 0;
}
