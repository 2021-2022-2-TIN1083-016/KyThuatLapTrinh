#include<iostream>
#include<string.h>

using namespace std ;

int main(){
    
    char baiA[] = "Ma hoa van ban";
    char tenB[] = "Nguyen Dac Thanh Long";
    char masvC[] = "21T1020043";
    
    string s ;
    cout << "Xau L:" ;
	cin >> s ;
    cout << "Khoa M:" ;
	int k ; 
	cin >> k ;
    cout << "Xau X:" ;
	for ( int i = k - 1 ; i >= 0 ; i-- ){
		cout << s[i] ;
	}

	for ( int i = s.length() - 1 ; i >= k  ; i-- ){
		cout << s[i] ;
	}	
}
