#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../../_src/Log.h"

int main(){
	char s[500];
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Ngo Van Hieu\n");
    LOG_IT("Msv: 21T1020027\n");
    LOG_DT("-----\n");
    LOG_DT("Nhap chuoi:");
    gets(s);
    long long ab = 0, sum = 0;
	for(int i=0;i<strlen(s);i++){
		if(s[i]>='0'&&s[i]<='9'){
			ab = ab*10 + s[i] - '0';
		}
		else{
			sum+= ab;
			ab = 0;
		}
	}if(s[strlen(s)-1]>='0'&&s[strlen(s)-1]<='9'){
		sum+=ab;
	}
	printf("Tong so: %lld", sum);
}