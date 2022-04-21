
#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;


int main()
{	char Bai[]= "Tan suat xuat hien ki tu";
    char Ten[]= "Vo Ngoc Lam Tan";
    char Msv[]="21t102682";
    LOG_WT("Bai: %s\n", Bai);
    LOG_IT("Ten: %s\n", Ten);
    LOG_IT("Msv: %s\n", Msv);
    LOG_DT("--------\n");
    string s, n, nTemp;
    LOG_DT( "Nhap xau :");
    getline(cin, s);
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            n += s[i];
        if (s[i] >= '0' && s[i] <= '9')
            n += s[i];
        if (s[i] >= 'a' && s[i] <= 'z')
            n += s[i];
    }
    nTemp = n;
    sort(n.begin(), n.end());

    for (int i = 0; i < n.length() - 1; i++)
    {
        for (int j = i + 1; j < n.length(); j++)
        {
            if (n[i] == n[j])
            {
                n.erase(j, 1);
                j--;
            }
        }
    }

    for (int i = 0; i < n.length(); i++)
    {
        int count = 0;
        for (int j = 0; j < nTemp.length(); j++)
        {
            if (n[i] == nTemp[j])
                count++;
        }
        cout << n[i] << "    " << count << endl;
    }

    return 0;
}