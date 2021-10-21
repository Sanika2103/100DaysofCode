#include <bits/stdc++.h>

using namespace std;
//int i=nums.begin();i<nums.end()-1;++i
int main()
{
   
   int n;
   cin>>n;
   vector <int>nums;
   for(int i=0;i<n;++i ){
       cin>>nums[i];
   }
   sort(nums.begin(),nums.end());
  vector<pair<int,int>> p;
   for(auto x :nums){
       p=make_pair(nums[x],nums[x+1]);
       }
       int sum=0;
    for(auto val :p){
      sum+= val.first;  
    }
    cout<<sum;
    return 0;
}
