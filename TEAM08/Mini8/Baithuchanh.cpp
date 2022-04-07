#include <bits/stdc++.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;
int main(){
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Tran Ngoc Anh Toan\n");
    LOG_IT("Ma sv: 21T1020760\n");
    LOG_DT("-----\n");
    
    string s;
    getline(cin, s);
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
    cout << t;
    return 0;
}