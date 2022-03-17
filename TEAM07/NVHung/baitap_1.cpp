#include<stdio.h>
#include<string.h>
#include"..\..\_src\Log.h"
#include "..\..\_src\Utils.h"

LOG_D("\n**********\n");

char ten[] = "Nguyen Viet Hung",

char lop[] "KTLT- N14"; 

int ngay = 16 ; int thang = 9;

std::string name StringFormat("%s %s %02d %04d", ten, lop, ngay, thang);
 LOG IT("%s\n", name.c_str());

std::vector<std::string> arrName Splitstring(name.c_str()," ");

int icnt = (int)arrName.size(); 
for (int i = 0; i < icnt;++i)

LOG_WT("%d [s]\n",i,arrName[i].c_str());