#include<iostream>
#include<string>
using namespace std;
#include"../../_src/Log.h"

int Sum(string s){
	int sum=0;
	int cnt=0;
	for(int i=0;i<=s.length();i++){
		if(s[i]>='0' && s[i]<='9'){
			int a=s[i];
			cnt = cnt*10+(a-'0');
		}
		else {
			sum= sum+ cnt;
			cnt=0;
		}
	}
	return sum;
}

int main(){
    LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Nguyen Hoan My\n");
    LOG_IT("Msv: 21T1020142\n");
    LOG_DT("-------\n");
    string s;
    LOG_DT("Nhap chuoi: ");
	getline(cin,s);
	LOG_WT("Tong so: ");
	cout<<Sum(s)<<endl;
} 