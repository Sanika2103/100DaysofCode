#include <bits/stdc++.h>

using namespace std;

int n, a;
string s;

int main() {
    cin >> n >> s>>a;
    a = a % 26;
    for(char c : s)
    {
        if( isalpha(c) == 0 )
            cout << c;
        else    //If it is an alphabet
        {
            unsigned char en = c + a;
            if( isupper(c) && en > 90 )
                en = en - 26;
            else if(islower(c) && en > 122)
                en = en - 26;
            cout <<en ;
        }
    }

    
    return 0;
}
