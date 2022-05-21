#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    LOG_D("\n****************\n");

    char bai[] = "Ma Hoa Van Ban";
    char ten[] = "Hoang Thanh Tung";
    char masv[] = "21t1020818";



    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_IT("msv: %s\n", masv);
    string s1; 
    cout<<"Xau Q:";
    cin >>s1;
    int k1;
     cout<<"Khoa k:";
    cin >>k1;
    reverse(s1.begin(),s1.begin() + k1);
    reverse(s1.begin()+k1,s1.end());
    cout <<"Xau Q:"<< s1;
}