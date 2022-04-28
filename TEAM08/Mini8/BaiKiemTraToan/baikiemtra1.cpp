#include <bits/stdc++.h>
#include "../../../_src/Log.h"
#include "../../../_src/Utils.h"
using namespace std;



int main()
{
    LOG_WT("Bai:Tan suat cac ky tu trong xau:\n");
   LOG_IT("Ten: Tran Ngoc Anh Toan\n");
   LOG_IT("MSV: 21T1020760\n");
   LOG_DT("-----------\n");
    string s;
    LOG_DT("Nhap xau:"); getline(cin, s);
    string  n, nTemp;
    for (int i = 0; i < s.length(); i++)
    {
        
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
        LOG_DT(""); LOG_W(""); cout << n[i] << " ";  
        LOG_E("");  cout <<count << endl;
    }
    
    return 0;
}