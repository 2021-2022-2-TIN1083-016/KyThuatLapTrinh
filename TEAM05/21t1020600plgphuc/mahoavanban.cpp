#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include <iostream>
#include <algorithm>


using namespace std;

int main()
{

    LOG_D("\n****************\n");

    char bai[] = "Ma Hoa Van Ban";
    char ten[] = "Phan Le Gia Phuc";
    char masv[] = "21t1020600";



    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_IT("msv: %s\n", masv);
    
    string p;
    cout<<"Xau Q:";
    cin >>p;
    int k;
    cout<<"Khoa k:";
    cin >>k;
    reverse(p.begin(),p.begin() + k);
    reverse(p.begin()+k,p.end());
    cout<<"Xau Q:"<< p ;
    
}