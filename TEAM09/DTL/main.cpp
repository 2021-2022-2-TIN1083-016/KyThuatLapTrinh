#include <bits/stdc++.h> 
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
int main() { 
    LOG_D("\n****************************\n");
    std::cout<<"Bai: Tong so xau"<<endl;
    std::cout<<"Ten: Dang Thi Lai"<<endl;
    std::cout<<"Msv:21T1020464"<<endl;
  std::string s;
  std::getline(std::cin, s);
  int result=0;
  std::string t = "";
    for(char ch : s) { 
    if(ch >= '0' && ch <= '9') {
        t += ch;
    }
    else { 
        if (t.length() > 0)
      result += stoi(t);  
      t = ""; 
    } 
  }
  if(t.length() > 0)
  result += stoi(t);  
  std::cout << result << std::endl;
  return 0; 
} 