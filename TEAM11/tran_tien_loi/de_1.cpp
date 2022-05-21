#include<iostream>
#include<string.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

using namespace std ;

int main(){
    LOG_D("\n****************\n");
    char bai[] = "Ma hoa van ban";
    char ten[] = "tran tien loi";
    char masv[] = "21T1020484";
    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_ET("msv: %s\n", masv);
    string n ;
    cout << "Xau Q:" ;
	cin >> n ;
    cout << "Khoa k:" ;
	int a ; 
	cin >> a ;
    cout << "Xau S:" ;
	for ( int i = a - 1 ; i >= 0 ; i-- ){
		cout << n[i] ;
	}

	for ( int i = n.length() - 1 ; i >= a  ; i-- ){
		cout << n[i] ;
	}	
}