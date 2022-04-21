#include <iostream>
#include <string.h>
using namespace std;
	char str[500];
	int main()
	{
        LOG_WT("Bai: Tan xuat cac so xuat hien trong xau");
		LOG_IT("Ten: Le Ngoc Linh");
		LOG_IT("Mã SV: 21t1020476");
		LOG_D("Nhap Xau");
		
  		int count;;
			cin.getline(str, 500);
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