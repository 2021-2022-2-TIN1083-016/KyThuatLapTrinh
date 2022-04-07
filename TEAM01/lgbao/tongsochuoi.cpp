#include <iostream>
#include<string.h>
using namespace std;
#include "..\..\_src\Log.h"


void nhap(char S[])
{
	gets(S);
}

void xuat(int x)
{
	cout<<x;
}

int tinhTongSoTrongChuoi(char S[])
{
	int len = strlen(S);
	int i=0;
	int tong=0;
	int so=0;
	while (i<=len)
	{
		if (S[i] >= '0' && S[i] <= '9')
			so = so * 10 + (S[i] - '0');
		else
		{
			tong = tong + so;
			so = 0;
		}
		i++;
	}
	return tong;
}

int main()
{
  LOG_WT("Bai: Tong so trong xau\n");
  LOG_IT("Ten: Le Gia Bao\n");
  LOG_IT("Msv: 21T1020009\n");
  LOG_DT("------\n");
  string s;
  LOG_DT("Nhap chuoi: ");
	char S[200];
	nhap(S);
	LOG_WT("Tong so: ");

	int tong= tinhTongSoTrongChuoi(S);
	xuat(tong);
	return 0;
}