#include<iostream>
#include<string.h>
#include "../../_src/Log.h"
using namespace std;

void xuat(char str[])
{
	int count;
  for (int i = 0; i <= 9; ++i)
	{
		count = 0;
		for (int j = 0; j < strlen(str); ++j)
		{
			if (str[j] == ('0' + i))
				count++;
		}
		if (count)
    {
      LOG_DT("");
      LOG_W("");
			cout << (char)('0' + i) << "\t";
            LOG_E("");
      cout << count << '\n' ;
    }
	}
	for (int i = 0; i <= 25; ++i)
	{
		count = 0;
		for (int j = 0; j < strlen(str); ++j)
		{
			if (str[j] == ('A' + i))
				count++;
		}
		if (count)
    {
      LOG_DT("");
      LOG_W("");
		cout << (char)('A' + i) << "\t" ;
      LOG_E("");
      cout << count << '\n' ;
    }
	}
	for (int i = 0; i <= 25; ++i)
	{
		count = 0;
		for (int j = 0; j < strlen(str); ++j)
		{
			if (str[j] == ('a' + i))
				count++;
		}
		if (count)
    {
      LOG_DT("");
      LOG_W("");
		  cout << (char)('a' + i) << "\t";
      LOG_E("");
      cout << count << '\n' ;
    }
     
	}
}

int main() {
  char str[10000];
  LOG_WT("Bai: Tong so trong xau:\n");
  LOG_IT("Ten: Le Gia Bao\n");
  LOG_IT("MSV: 21T1020009\n");
  LOG_DT("-------------\n");
  LOG_DT("Nhap chuoi:");
	  cin.getline(str, 10000);
    xuat(str);
	return 0;
	}