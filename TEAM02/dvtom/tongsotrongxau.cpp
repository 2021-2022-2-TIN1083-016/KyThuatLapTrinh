#include <iostream>
#include<math.h>
#include "..\..\_src\Log.h"
using namespace std;
int main()
{   
    LOG_ET( "Bai : Tong so trong xau\n");
    LOG_WT("Ho Va Ten: Doan Anh Tu\n");
    LOG_IT("Ma sv: 21T1020094\n");
    LOG_DT("-----\n");
    LOG_ET( "Nhap chuoi: " ); 
   string a;
   getline(cin,a);
   int tich;
   int tong=0;
   for(int i=0;i<a.length();i++){
       tich=0;
       if(a[i]>='0'&& a[i]<='9'){
           while(a[i]>='0' && a[i]<='9'){
                tich = tich*10+(a[i]-48);
                i++;
           }
       }
       tong = tong + tich;
       
   }
   cout<<tong;
}