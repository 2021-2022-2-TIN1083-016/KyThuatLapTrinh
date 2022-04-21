#include <iostream>
#include <string.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
using namespace std;
	char str[10000];
	int main()
	{
	LOG_ET( "Bai : cac ky tu trong xau\n");
    LOG_WT("ten: Nguyen Duc Nhuan\n");
    LOG_IT("msv: 21T1020145\n");
    LOG_DT("-----\n");
    LOG_ET( "Nhap xau: " );
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