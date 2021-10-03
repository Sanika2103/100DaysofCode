#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int count=0;
    if(s.length()<100 && s.length()%3==0){
        //auto m=s.length()/3;
        
        for(int i=0;i<s.length();i+=3){
        if(s[i]!='S')
           count++;
        if(s[i+1]!='O')
           count++;
        if(s[i+2]!='S')
           count++;
    }
    }
    cout<<count;
    return 0;
}
