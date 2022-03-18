#include <stdio.h>
#include "..\..\_src\Log.h"
void Member_01(){
  printf("Nguyen Dac Hoang Lan\n");
}
void Member_02(){
  printf("le gia bao\n");
}
void Member_03(){
  printf("Member3 - WINDOW\n");
}
void Member_04(){
}
int main(int argc, const char** argv) {
  printf("WELCOME C/C++ - GITHUB\n");
  LOG_WT("Logger Warning\n");
  LOG_IT("Logger Info\n");
  LOG_ET("Logger Error\n");
  LOG_DT("Logger Debug\n");

  LOG_W("Logger Warning\n");
  LOG_I("Logger Info\n");
  LOG_E("Logger Error\n");
  LOG_D("Logger Debug\n");
  Member_01();
  Member_02();
  Member_03();
  Member_04();
  return 0;
}