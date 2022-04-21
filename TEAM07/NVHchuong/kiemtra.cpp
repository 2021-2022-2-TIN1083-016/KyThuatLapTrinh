#include<iostream>
#include<string.h>
#include "..\..\_src\Log.h"
#include "../../_src/Utils.h"

using namespace std;

int main()
{
    LOG_ET( "Bai : cac ky tu trong xau\n");
    LOG_WT("Ho Va Ten: Nguyen Vu Hoang Chuong\n");
    LOG_IT("Ma sv: 21t1020267\n");
    LOG_DT("-----\n");
    LOG_ET( "Nhap xau: " ); 
    string s, n, nTemp;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            n += s[i] ;
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
        cout << n[i] << " " << count << endl;
    }

    return 0;
}