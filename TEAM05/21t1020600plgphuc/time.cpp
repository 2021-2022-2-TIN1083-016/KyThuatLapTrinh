#include <stdio.h>
#include "../../_src/Log.h"
//#include "..\..\_src\Utils.h"
#include "../../_src/HttpClient.h"
#include <string>

int main(){
  LOG_IT("***** START APP*****\n"); 
  curl_global_init(CURL_GLOBAL_DEFAULT);

  std::string szZone = "japan";
  std::string url = "http://api.weatherapi.com/v1/search.json?key=&q=japan" + szZone;
  std::string szContent;
  CHttpClient clt;
  if (!clt.SendRequest(url.c_str(),szContent)){
    LOG_ET("[%s] SendRequest()\n",szZone.c_str());
  }
  else{
    LOG_DT("GET %s\n",url.c_str());
    LOG_W("%s\n",szContent.c_str());
  }

  url = "http://api.weatherapi.com/v1/current.json?key=c5e6a96d00d54b37b9683120220405&q=Hanoi&aqi=no";
  if (!clt.SendRequest(url.c_str(),szContent)){
    LOG_ET("[%s] SendRequest()\n",szZone.c_str());
  }
  else{
    LOG_DT("GET %s\n",url.c_str());
    LOG_W("%s\n",szContent.c_str());
  }

  curl_global_cleanup();
  LOG_D("\n***** EXIT APP*****\n");  
  return 0;
}// g++ .\time.cpp ..\..\_src\Log.cpp ..\..\_src\HttpClient.cpp -o time.exe -lcurl