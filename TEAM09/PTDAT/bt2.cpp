#include<iostream>
#include<string.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
using namespace std;

char str[5001];
int main() {
    LOG_WT("Bai: Tan xuat cac ky tu trong xau\n");
    LOG_IT("Ten: Phan Tuan Dat\n");
    LOG_IT("Msv: 21T1020284\n");
    LOG_DT("--------\n");

    LOG_DT("Nhap xau :");
	int sotrung;   
	cin.getline(str, 5001);
	for (int i = 0; i <= 9; ++i)
	{
		sotrung = 0;
		for (int j = 0; j < strlen(str); ++j)
		{
			if (str[j] == ('0' + i))
				sotrung++;
		}
		if (sotrung)
			LOG_DT("");LOG_WT("");cout << (char)('0' + i) << "    "; 
            LOG_E("");
               cout<<sotrung <<'\n';
	}
	for (int i = 0; i <= 25; ++i)
	{
		sotrung = 0;
		for (int j = 0; j < strlen(str); ++j)
		{
			if (str[j] == ('A' + i))
				sotrung++ ;
		}
		if (sotrung){
		LOG_DT("");LOG_WT("");cout << (char) ('A' + i) << "    "; 
        LOG_E("");
          cout<<sotrung <<'\n';
	}
    }
	for (int i = 0; i <= 25; ++i)
	{
		sotrung = 0;
		for (int j = 0; j < strlen(str); ++j)
		{
			if (str[j] == ('a' + i))
				sotrung++ ;
		}
		if (sotrung){
		LOG_DT("");LOG_WT("");cout << (char)('a' + i) << "    " ;
          cout<<sotrung <<'\n';
	}
    }
return 0;
}