#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
#include"../../_src/Log.h"
string exam(string s, int n){
    int l = s.length() - n + 1;
	for(int i=0;i<n/2;i++){
		char c = s[i];
		s[i] = s[n-i-1];
		s[n-i-1] = c;
	}
	for(int i=0;i<l/2;i++){
		char m = s[n+i];
		s[n+i] = s[s.length() - i -1];
		s[s.length() - i -1] = m;
	}
    return s;
}
int main(){
    LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Nguyen Hoan My\n");
    LOG_IT("Msv: 21T1020142\n");
	int n;
	string s;
    LOG_DT("Xau Q: ");
	cin>>s;
    LOG_DT("Khoa k: ");
	cin>>n;
    LOG_ET("Xau S: ");
	cout<<exam(s,n)<<endl;
}//g++ exam.cpp  ../../_src/Log.cpp -o linux.exam