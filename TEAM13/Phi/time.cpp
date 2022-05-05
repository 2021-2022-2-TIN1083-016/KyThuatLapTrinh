#include <stdio.h>
#include "../../_src/Log.h"
//#include "..\..\_src\Utils.h"
#include "../../_src/HttpClient.h"
#include <string>

int main(){
  LOG_IT("***** START APP*****\n"); 
  curl_global_init(CURL_GLOBAL_DEFAULT);

<<<<<<< HEAD:TEAM01/VVDUNG/time.cpp
  std::string szZone = "Europe/Paris";//"Asia/Ho_Chi_Minh";
=======
>>>>>>> 232abbad1e52dc686016bedbe88f52b3e729b674:TEAM13/Phi/time.cpp
  std::string url = "https://www.timeapi.io/api/Time/current/zone?timeZone=" + szZone;
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