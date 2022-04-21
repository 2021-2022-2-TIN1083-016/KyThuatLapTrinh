#include<iostream>
#include<string>
#include"../../_src/Log.h"
using namespace std;
void Output (string s){
	int cnt[256] = {0};
	for(int i=0;i<s.length();i++){
		if(s[i]>='A'&&s[i]<='Z'){
			cnt[s[i]]++;
		}
		if(s[i]>='a'&&s[i]<='z'){
			cnt[s[i]]++;
		}
		if(s[i]>='0'&&s[i]<='9'){
			cnt[s[i]]++;
		}
	}
	for(int i=0;i<256;i++){
		if(cnt[i]!=0){
			LOG_WT("%c   %d\n", i, cnt[i]);
		}
	}
}

int main(){
   LOG_WT("Bai: Tan suat cac ky tu trong xau\n");
   LOG_IT("Ten: Nguyen Hoan My\n");
   LOG_IT("Msv: 21T1020142\n");
   LOG_DT("-------\n");
    string s;
   LOG_DT("Nhap chuoi: ");
	getline(cin,s);
	Output(s);
}