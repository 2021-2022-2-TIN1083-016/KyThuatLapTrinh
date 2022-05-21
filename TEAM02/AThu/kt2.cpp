
#include <bits/stdc++.h>
using namespace std;
string xoa_chan(string s)
{
    string res = "";
    if(s[0] == '-')
    {
        res += '-';
        for(int i = 1 ; i < s.size() ; i++)
        {
            if((s[i] - '0') % 2 != 0)
            {
                res += s[i];
            }
        }
        if(res == "-")
        {
            res = "0";
           
        }
    }
    else
    {
        for(int i = 0 ; i < s.size() ; i++)
        {
            if((s[i] - '0') % 2 != 0)
            {
                res += s[i];
            }
        }
        if(res == "")
        {
            res = "0";
            
        }
    }
    return res;
}