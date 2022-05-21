#include<iostream>
#include<string.h>
using namespace std;
#include"../../_src/Log.h"
int main(){
    LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Vo Ngoc Lam Tan\n");
    LOG_IT("Msv: 21T1020682\n");
    string s1;
	int k;
    LOG_IT("Xau Q:");
	getline(cin,s1);
    LOG_WT("Khoa K:");
	cin>>k;	
	string s2=s1.substr(0,k);
	string s3=s1.substr(k);
    LOG_DT("Xau S:");
	for(int i=s2.length()-1;i>=0;i--){
		cout<<s2[i];
	}
	for(int i=s3.length()-1;i>=0;i--){
		cout<<s3[i];
	}
	cout<<endl;
}