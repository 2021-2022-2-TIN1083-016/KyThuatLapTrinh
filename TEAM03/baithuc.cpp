#include <bits/stdc++.h> 

int main() { 
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