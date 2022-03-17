#include<stdio.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h

int main (){
    LOG_D("\n****************\n");
char ten [] = "Phan Van Thanh";
char lop [] = "KTLT - N14  ";
int thang = 3;
int nam = 2001;
std::string name = stringFormat ("%s %s %02d %04d",ten, lop,thang,nam);
LOG_IT("%s\n",name.c_str());
std::vector<std::string> arrName = SplitString (nam.c_Str()," ");
int iCnt = (int)arrName.size();
for (int i = 0; i < iCnt;++1)
   LOG_WT("%d [%s]\n",i,arrName[i].c_str());
   return 0;
}
