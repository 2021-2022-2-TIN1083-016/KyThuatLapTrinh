#include <iostream>
#include <stdio.h>  
#include <string.h>
#include "..\..\_src\Log.h"
using namespace std;
using namespace std;
int tinhtong(char s[]){
	int len=strlen(s);
	int i=0;
	int tong=0;
	int so=0;
	while (i<=len){
		if(s[i]>='0' && s[i]<'9')
		so=so*10 + (s[i]-'0');
		else	{
		 tong= tong+so;
		 so=0;}
         i++;
	}
 return tong;} 
int main (){
char s[500];
 LOG_WT("Bai: Tong so trong xau:\n");
 LOG_IT("Ten: Le Thanh Dat\n");
 LOG_IT("MSV: 21T1020123\n");
 LOG_DT("-------------\n");
 LOG_DT("Nhap chuoi:"); gets(s); 
 int tong =tinhtong(s);
 LOG_WT("Tong so: ");  cout<<tong;
 return 0;
}
