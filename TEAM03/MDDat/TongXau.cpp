#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../_src/Log.h"

int main(){
	char s[500];
	printf("Bai: Tong so trong xau\n");
	printf("Ten: Mai Duc Dat\n");
	printf("Msv: 21T1020880\n");
	printf("-----\n");
	printf("Nhap chuoi:");
	gets(s);
	long long cnt = 0, sum = 0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='0'&&s[i]<='9'){
			cnt = cnt*10 + s[i] - '0';
		}
		else{
			sum+= cnt;
			cnt = 0;
		}
	}if(s[strlen(s)-1]>='0'&&s[strlen(s)-1]<='9'){
		sum+=cnt;
	}
	printf("Tong so: %lld", sum);
}
