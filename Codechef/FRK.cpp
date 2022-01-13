#include <iostream>
#include<string>
using namespace std;

int main()
{
    int t;
    cin >> t;
     int count =0;
    while (t--) {
        string s;
        cin >> s;
       
        if(s.find("ch") != -1 || s.find("he") != -1 || s.find("ef") != -1 ){
            count++;
        }
        
    }
    cout<<count;
    return 0;
}
