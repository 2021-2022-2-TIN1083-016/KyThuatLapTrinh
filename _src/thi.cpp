#include<stdio.h>
#include<string.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

int main(){
    char bai[]= "tan suat xuat hien ki tu";
    char ten[]= "tran van huy";
    char masv[]="21t1020035";
    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_IT("msv: %s\n", masv);
    LOG_DT("--------\n");
	char s[500], s1[500];
	int l=0;
	fflush(stdin);
    LOG_DT("nhap xau: ");
	fgets(s, sizeof(s), stdin);
	for(int i=0; i<strlen(s); i++){
		if(s[i]>='a'&& s[i]<='z'|| s[i]>='A' && s[i]<='Z' || s[i]>='0' && s[i]<='9'){
			int k=0;
			for(int j=0; j<strlen(s1); j++){
				if(s[i]==s1[j]){
					k++;
					break;
				}
			}
			if(k==0){
				s1[l++]=s[i];
			}
		}
	}	
	s1[l]='\0';
	for(int i=0; i<strlen(s1)-1; i++){
		for(int j=i+1; j<strlen(s1); j++){
			if(s1[i]>s1[j]){
				char m=s1[i];
				s1[i]=s1[j];
				s1[j]=m;
			}
		}
	}
	for(int i=0; i<strlen(s1); i++){
		int h=0;
		for(int j=0; j<strlen(s); j++){
			if(s1[i]==s[j]){
				h++;
			}
		}
        LOG_DT("%c   %d\n",s1[i],h);
	}
}