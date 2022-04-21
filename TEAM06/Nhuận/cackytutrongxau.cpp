#include <iostream>
#include <string.h>
using namespace std;
	char str[10000];
	int main()
	{
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