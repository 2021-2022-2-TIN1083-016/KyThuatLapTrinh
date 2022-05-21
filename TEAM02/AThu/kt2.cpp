#include<iostream>
#include<string.h>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string n;
    cin >> n;
    string s = "";
    if(n[0] == '-')
    {
        s+="-";
        for(int i = 1 ; i < n.size() ; i++)
        {
            if((n[i] - '0') % 2 != 0)
            {
                s += n[i];
            }
        }
    }
    else
    {
        for(int i = 0 ; i < n.size() ; i++)
        {
            if((n[i] - '0') % 2 != 0)
            {
                s += n[i];
            }
        }
    }
    
    if(s=="")
    {
        cout << 0 << endl;
    }
    else if(s == "-")
    {
        cout << 0 << endl;
    }
    else cout << s << endl;
}
