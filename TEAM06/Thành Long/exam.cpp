#include<stdio.h>
#include<string.h>

int main(){
	char s[500], s1[500];
	int l=0;
	fflush(stdin);
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
		printf("%c   %d\n",s1[i],h);
	}
}