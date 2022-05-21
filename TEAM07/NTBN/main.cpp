#include<iostream>
#include<string.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

using namespace std ;

int main()
{
    LOG_D("\n****************\n");
    char BAI[] = "MA HOA VAN BAN";
    char TEN[] = "NGUYỄN THỊ BẢO NGỌC";
    char MA SINH VIEN[] = "21T1020533";
    LOG_WT("bai: %s\n", BAI);
    LOG_IT("ten: %s\n", TEN);
    LOG_ET("msv: %s\n", MA SINH VIEN);
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
