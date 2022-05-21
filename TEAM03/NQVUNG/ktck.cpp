#include<iostream>
#include<string.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

using namespace std ;

int main(){
    LOG_D("\n****************\n");
    char bai[] = "Ma hoa van ban";
    char ten[] = "Nguyen Vu Hoang Chuong";
    char masv[] = "21T1020267";
    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_ET("msv: %s\n", masv);
    string s ;
    cout << "Xau Q:" ;
	cin >> s ;
    cout << "Khoa k:" ;
	int k ; 
	cin >> k ;
    cout << "Xau S:" ;
	for ( int i = k - 1 ; i >= 0 ; i-- ){
		cout << s[i] ;
	}

	for ( int i = s.length() - 1 ; i >= k  ; i-- ){
		cout << s[i] ;
	}	
}


