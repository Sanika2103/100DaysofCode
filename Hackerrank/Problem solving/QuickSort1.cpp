#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int part=arr[0];
    int i=0,j=n-1;
    while(i<j){
        while(i<n && part > arr[i])i++;
        while(j>=0 && part < arr[j])j--;
        if(i<j)swap(arr[i],arr[j]);
    }
    if(i>j){swap(arr[0],arr[j]);}
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
