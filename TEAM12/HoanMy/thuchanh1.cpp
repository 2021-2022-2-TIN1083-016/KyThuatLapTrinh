//Bai thuc hanh so 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	char s[1000];
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
	printf("%lld", sum);
}