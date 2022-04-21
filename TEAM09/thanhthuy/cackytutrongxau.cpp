#include<iostream>
#include<string>
#include <bits/stdc++.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"

using namespace std;


void Daura (string s){
	int a[256] = {0};
	for(int i=0;i<s.length();i=i+1){
		if(s[i]>='A'&&s[i]<='Z'){
			a[s[i]]++;
		}
		if(s[i]>='a'&&s[i]<='z'){
			a[s[i]]++;
		}
		if(s[i]>='0'&&s[i]<='9'){
			a[s[i]]++;
		}
	}
	for(int i=0;i<256;i=i+1){
		if(a[i]!=0){
			cout<<(char)i<<"    "<<a[i]<<endl;
		}
	}
}

int main(){
    LOG_ET( "Bai : cac ky tu trong xau\n");
    LOG_WT("Ho Va Ten: Le Thi Thanh Thuy\n");
    LOG_IT("Ma sv: 21T1020083\n");
    LOG_DT("-----\n");
    LOG_ET( "Nhap xau: " );
    string s;
	getline(cin,s);
	Daura(s);
}