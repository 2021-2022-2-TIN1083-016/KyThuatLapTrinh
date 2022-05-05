#include <stdio.h>
#include "../../_src/Log.h"
//#include "..\..\_src\Utils.h"
#include "../../_src/HttpClient.h"
#include <string>

int main(){
  LOG_IT("***** START APP*****\n"); 
  curl_global_init(CURL_GLOBAL_DEFAULT);

  std::string szZone = "london";
  std::string url = "http://api.weatherapi.com/v1/current.json?key=&q=London&aqi=no" + szZone;
  std::string szContent;
  CHttpClient clt;
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
}