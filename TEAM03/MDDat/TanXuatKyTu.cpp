#include<stdio.h>
#include<string.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

int main(){
    LOG_WT("Bai: Tan xuat cac ky tu trong xau\n");
    LOG_IT("Ten: Mai Duc Dat\n");
    LOG_IT("Msv: 21T1020880\n");
    LOG_DT("--------\n");
	char s[500], S[500];
	int lg=0;
	fflush(stdin);
    LOG_DT("Nhap xau: ");
	fgets(s, sizeof(s), stdin);
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='a'&& s[i]<='z'|| s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
			int k=0;
			for(int j=0; j<strlen(S); j++){
				if(s[i]==S[j]){
					k++;
					break;
				}
			}
			if(k==0){
				S[lg++]=s[i];
			}
		}
	}	
	S[lg]='\0';
	for(int i=0; i<strlen(S)-1; i++){
		for(int j=i+1; j<strlen(S); j++){
			if(S[i]>S[j]){
				char m=S[i];
				S[i]=S[j];
				S[j]=m;
			}
		}
	}
	for(int i=0; i<strlen(S); i++){
		int h=0;
		for(int j=0; j<strlen(s); j++){
			if(S[i]==s[j]){
				h++;
			}
		}
        LOG_DT("%c   %d\n",S[i],h);
	}
}