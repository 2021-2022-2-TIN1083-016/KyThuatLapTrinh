#include "../../_src/Log.h"
#include "../../_src/Utils.h"
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    LOG_ET( "Bai : tan xuat cac ki tu trong xau\n");
    LOG_WT("Ho Va Ten: Huynh Kim Khanh\n");
    LOG_IT("Ma sv: 21T1020451\n");
    LOG_DT("-----\n");
    LOG_ET( "Nhap xau: " );
	string s;
	getline(cin,s);
	int dem;
	for(char so='0'; so <='9'; so++){
		dem = 0;
		for(int i=0; i<s.length(); i++)
		if(so == s[i])
		dem++;
		if(dem>0)
	cout<<so<<setw(4)<<dem<<endl;
	}
	for(char c='A'; c <='Z'; c++){
		dem = 0;
		for(int i=0; i<s.length(); i++)
		if(c == s[i])
		dem++;
		if(dem>0)
	cout<<c<<setw(4)<<dem<<endl;
}
    for(char c='a'; c <='z'; c++){
		dem = 0;
		for(int i=0; i<s.length(); i++)
		if(c == s[i])
		dem++;
		if(dem>0)
	cout<<c<<setw(4)<<dem<<endl;
}
}