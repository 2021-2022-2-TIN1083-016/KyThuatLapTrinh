#include<iostream>
#include<string>
using namespace std;
#include"../../_src/Log.h"

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
			cout<<(char)i<<"    "<<cnt[i]<<endl;
		}
	}
}

int main(){
   LOG_WT("Bai: Tan suat cac ky tu trong xau\n");
   LOG_IT("Ten: Phan Van Thanh\n");
   LOG_IT("Msv: 21T1020077\n");
   LOG_DT("-------\n");
    string s;
   LOG_DT("Nhap chuoi: ");
   
	getline(cin,s);
	Output(s);
}