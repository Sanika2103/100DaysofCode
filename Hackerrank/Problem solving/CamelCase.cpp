#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    long m = s.length();
    long count = 1;
    for(long i=0;i<m;i++){
       if(isupper(s[i]) )
       count++;
    }
    cout<<count;
    return 0;
}
