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
    }
    
    int str=0;
    int end = n;
    //while(str<=end){
    for(int i=str;i<end;i++){
    int mid=(str+end)/2;
        if(arr[mid]==a){
            cout<<mid;
        }
        else if(arr[mid]>a){
            end=mid-1;
           
        }
        else{
           str=mid+1; 
        }
    
    }
    return 0;
}
