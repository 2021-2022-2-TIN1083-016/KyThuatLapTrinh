#include <bits/stdc++.h> 
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"

int main() { 
  std::string s;
char Bai [] = "Tong so trong xau";
  char ten [] = "Phan Van Thanh";
char Msv [] = "21T1020077 ";
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