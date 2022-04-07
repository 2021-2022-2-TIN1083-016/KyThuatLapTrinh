#include <stdio.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include "tongso.cpp"

int main(){

    LOG_D("\n****************\n");

    char bai[] = "Tong So Trong Sau";
    char ten[] = "TRAN VAN HUY";
    char masv[] = "21t1020035";



    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_ET("msv: %s\n", masv);

    main();
    
return 0;
}