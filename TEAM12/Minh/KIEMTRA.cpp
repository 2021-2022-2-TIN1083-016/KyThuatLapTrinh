#include<iostream>
#include<string.h>
using namespace std;
#include"../../_src/Log.h"

int main(){
    LOG_WT("Bai: Tan suat cac ki tu trong xau\n");
    LOG_IT("Ten: Nguyen Luu Duc Minh\n");
    LOG_IT("Msv: 21T1020518\n");
    LOG_DT("------\n");
	char s1[500],s2[500],s3[500];
	int n1=0,n2=0;
    LOG_DT("Nhap xau: ");
	cin.getline(s1,500);
	//chuyen s1 qua s2(xoa khoang trang)
	for(int i=0;i<strlen(s1);i++){
		if(s1[i]!=32){
			s2[n1++]=s1[i];
		}
	}
	//sap xep theo ma ascii
	for(int i=0;i<strlen(s2)-1;i++){
		for(int j=i+1;j<strlen(s2);j++){
			if(s2[i]>s2[j]){
				char temp=s2[i];
				s2[i]=s2[j];
				s2[j]=temp;
			}
		}
	}
	//chuyen s2 sang s3(loai bo cac ki tu trung nhau)
	for(int i=0;i<n1;i++){
		if(s2[i]!=s2[i+1]){
			s3[n2++]=s2[i];
		}
	}
	//dem so lan xuat hien ki tu
	for(int i=0;i<n2;i++){
		int count=0;
		for(int j=0;j<n1;j++){
			if(s3[i]==s2[j]){
				count++;
			}
		}
		LOG_WT("");
		cout<<s3[i];
		cout<<"    "<<count<<endl;
	}
}
