#include<bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;
int main(){
     LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Du Ngoc HUng\n");
    LOG_IT("Msv: 21T1080014\n");
    LOG_DT("------\n");
    LOG_DT("Xau Q: ");
    string str;
    cin >> str;
    int k;
    LOG_DT("Khoa k: ");
    cin >> k;
    LOG_DT("Xau S: ");
    for(int i=k-1;i>=0;i--){
        LOG_E("");
        cout << str[i];
    }
    int i = str.size()-1;
    while(i>=k){
        
        LOG_E("");
        cout << str[i];
        i--;
    }
    
    return 0;
}