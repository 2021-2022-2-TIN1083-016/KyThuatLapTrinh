#include<iostream>
#include<string.h>
#include "../../_src/Log.h"
using namespace std;
char str[10000];
int main(){
    LOG_WT("Bai: Tan suat xuat hien ki tu\n");
    LOG_IT("Ten: Nguyen Dac Hoang Lan\n");
    LOG_IT("Msv: 21T1020468\n");
    LOG_DT("-------------------\n");
    LOG_DT( "Nhap xau : ");
	int x;
	cin.getline(str,10000);
	for(int i=0;i<=9;++i){
		x=0;
		for(int j=0;j<strlen(str);++j){
			if(str[j]==('0'+i))
			x++;
		}
		if(x){
		LOG_DT("");
		LOG_W("");
			cout<<(char)('0'+i)<<"      ";
		LOG_E("");
		    cout<<x<<endl;
	}
	}
	for(int i=0;i<=25;++i){
		x=0;
		for(int j=0;j<strlen(str);++j){
			if(str[j]==('A'+i))
			x++;
		}
		if (x){
		LOG_DT("");
		LOG_W("");
		cout<<(char)('A'+i)<<"      ";
		LOG_E("");
		cout<<x<<endl;
	}
	}
	for(int i=0;i<=25;++i){
		x=0;
		for(int j=0;j<strlen(str);++j){
			if(str[j]==('a'+i))
			x++;
		}
		if(x){
		LOG_DT("");
		LOG_W("");
		cout<<(char)('a'+i)<<"      ";
		LOG_E("");
		cout<<x<<endl;
	}
	}
	return 0;
}