/*#include <iostream>
#include <string>

#include "../../_src/Log.h"
using namespace std;
int tongsotrongxau(string a){
  int ton =0;
  int x=0;
  for(int i=0;i <=a.length();i++){
    if(a[i]>='0' && a[i] <= '9'){
      int c=a[i];
      x = x*10+(c-48);
    }
    else{
      ton = ton + x;
    }
  }
  return ton;
}
int main(){
LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Du Ngoc HUng\n");
    LOG_IT("Msv: 21T1080014\n");
    LOG_DT("------\n");
    string a;
    LOG_DT("Nhap chuoi: ");
	getline(cin,a);
	LOG_WT("Tong so: ");
	cout<<tongsotrongxau(a)<<endl;	
}*/
#include <bits/stdc++.h> 
#include "../../_src/Log.h"
using namespace std;

int Tinhsocotrongchuoi (string a,int n){
	long long d=-1;
	for(int i=n;isdigit(a[i]);i++) {
		d++; 
	}
	return pow(10,d) ;
} 
int main (){
  LOG_WT("Bai: Tong so trong xau\n");
    LOG_IT("Ten: Du Ngoc HUng\n");
    LOG_IT("Msv: 21T1080014\n");
    LOG_DT("------\n");
    string a;
    LOG_DT("Nhap chuoi: ");
	int tong;
	getline(cin,a) ;
	for(int i=0; i< a.size();i++) {
		if(isdigit(a[i])){
			tong += (a[i]-'0') *Tinhsocotrongchuoi(a,i) ;
		} 
	}
	LOG_WT("Tong so: ");cout << tong;
	 
}