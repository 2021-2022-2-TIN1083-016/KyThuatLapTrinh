#include <bits/stdc++.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
using namespace std;

int main(){
 
   LOG_WT("Bai: Tong so trong xau:\n");
   LOG_IT("Ten: Phan tuan Dat\n");
   LOG_IT("MSV: 21T1020284\n");
   LOG_DT("-------------\n");
   string s;
   LOG_DT("Nhap chuoi:"); getline(cin, s);
   
   string str = "";
   long long t= 0;
   for(int i = 0; i <= (int)s.length(); ++i){
        if(s[i] >= '0' && s[i] <= '9'){
            str.push_back(s[i]);
        }
        else{
            if(str != ""){
                t+= stoll(str);
                str = "";
            }
        }
    } 
//  int tong =tinhtong(s);
   LOG_WT("Tong so: ");  cout<<t;
  return 0;
}
    // cout << t;
//     return 0;
// }