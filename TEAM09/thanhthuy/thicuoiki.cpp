#include <bits/stdc++.h>
#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
#include"..\..\_src\Log.h"
using namespace std;
string daoxau( string s, int n){
	int l = s.length() - n + 1;
	for(int i=0;i<n/2;i++)
	{
	char c = s[i];
	s[i] = s[n-i-1];
	s[n-i-1] = c;
	}
	for(int i=0;i<l/2;i++)
	{
	char m = s[n+i];
	s[n+i] = s[s.length() - i -1];
	s[s.length() - i -1] = m;
	}

	return s;
}
int main(){
    LOG_WT("Bai: Ma hoa van ban\n");
    LOG_IT("Ten: Le Thi Thanh Thuy\n");
    LOG_IT("Msv: 21T1020083\n");
	int n;
	char s[1000];
    LOG_DT("Xau Q: ");
	printf("%s", s);
    LOG_DT("Khoa k: ");
	cin>>n;
   cout<< daoxau(s,n);

} 