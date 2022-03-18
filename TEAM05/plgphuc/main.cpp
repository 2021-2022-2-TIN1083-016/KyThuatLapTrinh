#include <stdio.h>
#include "..\..\_src.\Log.h"

int main(){
  printf("WELCOME TEAM 5 C/C++\n");
  
  LOG_WT("Hello\n");
  LOG_IT("Logger Info\n");
  LOG_ET("Logger Eror\n");
  LOG_DT("Logger Debug\n");

  LOG_W("Logger Warning\n");
  LOG_I("Logger Info\n");
  LOG_E("Logger Error\n");
  LOG_D("Logger Debug\n");

return 0;
}