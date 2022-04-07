#include <iostream>
#include<math.h>
#include "..\..\_src\Log.h"
using namespace std;
int main()
{   

    char ten[] = "Doan Anh Tu";
    char msv[] = "21T1020094";
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