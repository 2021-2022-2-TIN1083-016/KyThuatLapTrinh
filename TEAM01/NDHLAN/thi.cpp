#include<iostream>
#include<string.h>
#include "../../_src/Log.h"
using namespace std ;

int main() {
    LOG_WT("Bai: Ma Hoa Van Ban\n");
    LOG_IT("Ten: Nguyen Dac Hoang Lan\n");
    LOG_IT("Msv: 21T1020468\n");
    string  s;
    LOG_DT("");
    cout<<"Xau Q: ";
	cin>> s;
    LOG_DT("");
    cout<<"Khoa k: ";
	int k; 
	cin>> k;
    LOG_DT("");
    cout<<"Xau S: ";
    LOG_E("");
	for(int i=k-1;i >=0;i--){
		cout  <<s[i] ;
	}
	for (int i=s.length()-1;i>= k;i--){
		cout<<  s[i] ;
	}	
}