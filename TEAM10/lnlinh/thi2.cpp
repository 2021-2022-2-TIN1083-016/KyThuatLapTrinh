#include <iostream>
#include<algorithm>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
using namespace std;

int main(){

    LOG_D("\n****************\n");

    char bai[] = "Ma hoa van ban";
    char ten[] = "Lê Ngọc Linh";
    char masv[] = "21t1020476";

    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_IT("msv: %s\n", masv);

    string a;
    cout<<"Xau Q:";
    cin>>a;
    int n;
    cout<<"Khoa k:";
    cin>>n;
    reverse(a.begin(),a.begin()+n);
    reverse(a.begin()+n,a.end());
    cout<<"Xau S:"<<a;

}