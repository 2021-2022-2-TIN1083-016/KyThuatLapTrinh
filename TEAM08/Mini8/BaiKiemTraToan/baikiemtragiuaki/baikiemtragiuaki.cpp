#include<iostream>
#include<string.h>
using namespace std;
#include"../../../../_src/Log.h"
#include "../../../../_src/Utils.h"
int main(){
    LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Tran Ngoc Anh Toan\n");
    LOG_IT("Msv: 21T1020760\n");
    string firstnumber;
	int x;
    LOG_DT("Xau Q: "); LOG_D("");
	getline(cin,firstnumber);
    LOG_DT("Khoa K: "); LOG_D("");
	cin>>x;	
	string secondnumber=firstnumber.substr(0,x);
	string thirdnumber=firstnumber.substr(x);
    LOG_DT("Xau S: "); LOG_E("");
	for(int i=secondnumber.length()-1;i>=0;i--){
		cout<<secondnumber[i];
	}
	for(int i=thirdnumber.length()-1;i>=0;i--){
		cout<<thirdnumber[i];
	}
	cout<<endl;
}