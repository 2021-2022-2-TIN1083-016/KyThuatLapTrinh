#include <iostream>
#include <string>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"

using namespace std ;

int main(){
    LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Mai Duc Dat\n");
    LOG_IT("Msv: 21T1020880\n");
    LOG_D("Xau Q: ");
    string a;
	cin >> a;
    cin.ignore();
    LOG_D("Koa k: ");
	int k ; 
	cin >> k ;
    LOG_D("Xau S: ");
	for (int i=k-1; i>=0; i--){
		cout << a[i];
	}
	for (int i=a.size()-1; i>=k ; i--){
		cout << a[i];
	}
	return 0;	
}

