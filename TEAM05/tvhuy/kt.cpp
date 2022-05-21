#include <bits/stdc++.h>
using namespace std;
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

void ktra(char s[]);
void ktr(char s[], int n);
int main(){

    LOG_D("\n****************\n");

    char bai[] = "ma hoa xau";
    char ten[] = "TRAN VAN HUY";
    char masv[] = "21t1020035";



    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_IT("msv: %s\n", masv);   

{
	char s[500];
	int k;
	fflush(stdin);
    LOG_DT("xau Q: ");
	fgets(s, sizeof(s), stdin);
    LOG_DT("khoa: ");
	scanf("%d",&k);
	ktr(s,k);
}

    
return 0;
}
void ktr(char s[], int n){
	int so = strlen(s)-n+1;
	char a, m;
	int s1=strlen(s);
	for(int i=0; i<n/2; i++){
		a = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = a;
	}
	for(int i=0; i<so/2; i++){
		m = s[n+i];
		s[n+i] = s[s1-i-1];
		s[s1-i-1] = m;
	}
	LOG_DT("%s",s);
}