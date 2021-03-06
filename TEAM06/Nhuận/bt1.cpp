#include <stdio.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"

int main(){
    LOG_D("\n****************\n");
    char ten[] = "NGUYEN DUC NHUAN <3 Bao Tram"; 
    char lop[] = "KTLT - N16";
    int thang = 3 ;
    int nam = 2022;
    std::string name = StringFormat("%s %s %02d %04d", ten, lop, thang, nam);
    LOG_IT("%s\n",name.c_str());
    std::vector<std::string> arrName = SplitString(name.c_str()," ");
    int iCnt = (int)arrName.size();
    for (int i = 0; i < iCnt; ++i)
    LOG_WT("%d [%s]\n",i,arrName[i].c_str());
    return 0;
}