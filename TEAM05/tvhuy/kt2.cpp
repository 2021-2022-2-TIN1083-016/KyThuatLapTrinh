
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

int main(){

    LOG_D("\n****************\n");

    char bai[] = "ma hoa xau";
    char ten[] = "TRAN VAN HUY";
    char masv[] = "21t1020035";



    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_IT("msv: %s\n", masv);   

{

char s[250];
	fflush(stdin);
	 LOG_DT("xau Q: ");
	fgets(s, sizeof(s),stdin);
	int k;
	LOG_DT("khoa: ");
	scanf("%d",&k);
	LOG_DT("xau s: ");
	for(int i=k-1; i>=0; i--){
		printf("%c",s[i]);
	}
	for(int i=strlen(s)-2; i>=k; i--){
		printf("%c",s[i]);
	}


}

    
return 0;
}