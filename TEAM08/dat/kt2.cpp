#include <iostream>
#include<algorithm>
#include "../../_src/Log.h"
using namespace std;

int main(){

    LOG_D("\n****************\n");
    LOG_WT(" Bai: Ma hoa van ban\n");
    LOG_IT("ten:Le Thanh Dat\n");
    LOG_IT("msv: 21T1020123\n");

    string s;
    LOG_DT("Xau Q:");
    cin>>s;
    int n;
    LOG_DT("Khoa k:");
    cin>>n;
        reverse(s.begin(),s.begin()+n);
        reverse(s.begin()+n,s.end());
    LOG_DT("Xau S:"); cout<<s;
}