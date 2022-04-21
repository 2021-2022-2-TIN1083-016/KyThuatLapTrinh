#include <iostream>
#include <string.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
using namespace std;
	char str[10000];
	int main()
	{
        LOG_WT("bai: Tan xuat cac ki tu trong xau\n");
        LOG_IT("ten: Nguyen viet Hung\n");
        LOG_IT("Msv:21t1020397\n");
        LOG_DT("------------------------\n");
        LOG_DT("nhap xau:");
  		int count;;
			cin.getline(str, 10000);
		for (int i = 0; i <= 9; ++i)
		{	
			count = 0;
		for (int j = 0; j < strlen(str); ++j)
			{
				if (str[j] == ('0' + i))
				  count++;
			}
		if (count)
            
			cout << (char)('0' + i) << " " << count << '\n';
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
			cout << (char)('A' + i) << " " << count << '\n';
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
			cout << (char)('a' + i) << " " << count << '\n';
		}
	return 0;
}