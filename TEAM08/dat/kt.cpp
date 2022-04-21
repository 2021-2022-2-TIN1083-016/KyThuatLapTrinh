#include <bits/stdc++.h>
#include <string.h>
#include "..\..\_src\Log.h"
using namespace std;
int main()
{
    char *s = new char[501];
    LOG_WT("Bai: tan suat cac ky tu trong xau\n");
    LOG_IT("Ten: Le Thanh Dat\n");
    LOG_IT("Msv: 21t1020123\n");
    LOG_DT("------\n");
    LOG_DT("Nhap xau:");
    gets(s);
    int x = 0,b[100000],count = 0,d[100000],z = 0;
    for(int i = 0 ; i < strlen(s) ; i++)
        b[x++] = (int)*(s+i);
    for(int i = 0 ; i < strlen(s) ; i++)
    {
        char c = (int)*(s+i);
        if(c != 32)
        {
            if(c >= 65 && c <= 90 || c >= 97 && c <= 122 || c >= 48 && c <= 57)
            {
                for(int j = 0 ; j < i + 1 ; j++)
                {
                    if(c == b[j])
                        count++;
                }
                if(count == 1)
                {
                    d[z++]=(int)*(s+i);
                    count = 0;
                }
                if(count > 1)
                    count = 0;
            }
        }
    }
    for(int i = 0 ; i < z - 1 ; i++)
    {
        for(int j = i + 1 ; j < z ; j++)
        {
            if(d[i] > d[j])
            {
                int t = d[i];
                d[i] = d[j];
                d[j] = t;
            }
        }
    }
    int f = 0;
    for(int i = 0 ; i < z ; i++)
    {
        for(int j = 0 ; j < strlen(s) ; j++)
        {
            if(d[i] == (int)*(s+j))
                f++;
        }
    cout<<(char)d[i]<<"  "<<f<<endl;      
  f = 0;
    }
    return 0;
}