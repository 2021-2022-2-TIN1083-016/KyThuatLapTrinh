#include<bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
int main(){
     LOG_WT("Bai: Tan suat cac ky tu trong xau\n");
    LOG_IT("Ten: Du Ngoc HUng\n");
    LOG_IT("Msv: 21T1080014\n");
    LOG_DT("------\n");
    string s;
    LOG_DT("Nhap xau: ");
    getline(cin, s);
    char a;
    int m = 0;
    for (int i = 0; i < s.length() - 1; i++)
        for (int j = i + 1; j < s.length(); j++)
        {
            if (int(s[i]) > int(s[j]))
            {
                a = s[i];
                s[i] = s[j];
                s[j] = a;
            }
        }
    while (m < s.length())
    {
        int d = 0;
        if (s[m] != ' ')
        {
            for (char i = 0; i < s.length(); i++)
            {
                if (s[m] == s[i])
                    d++;
            }
            if (s[m] != s[m + 1])
            {
                if (m != s.length())
                {
                    if (((s[m] <= 'z') && (s[m] >= 'a')) || ((s[m] >= '0') && (s[m] <= '9')) || ((s[m] <= 'Z') && (s[m] >= 'A')))
                    {
                        LOG_DT("   ");
                        LOG_W(" %d",s[m]); 
                        //cout << s[m];
                       LOG_E(" %4d\n", d);
                        //printf("%4d", d);
                    }
                }
                else
                {
                    if (((s[m] <= 'z') && (s[m] >= 'a')) || ((s[m] >= '0') && (s[m] <= '9')) || ((s[m] <= 'Z') && (s[m] >= 'A')))
                    {
                        LOG_DT("   ");
                        LOG_W(" %d",s[m]); 
                        //cout << s[m];
                       LOG_E(" %4d\n", d);
                        //printf("%4d", d);
                       // LOG_DT("%o   %h\n",s[m],d);
                    }
                }
            }
        }
        m++;
    }
}