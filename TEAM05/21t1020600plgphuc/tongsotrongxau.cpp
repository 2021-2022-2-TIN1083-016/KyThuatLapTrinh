#include<stdio.h>
#include<string.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"
void xuat(char str[]);


int main(){
	char str[500]; 
	fflush(stdin);
	fgets(str, sizeof(str), stdin);
	xuat(str);
}
void xuat(char str[]){
	int i=0,j,tong=0,n; 
	while(i<=strlen(str)-1) {
          if(str[i]<='9' && str[i]>='0') 
           { 
            j=i; 
            n=0;            
            while(j<=strlen(str)-1 && (str[j]<='9' && str[j]>='0')) 
             { 
                n=10*n+(int)str[j]-48; 
                j++; 
             } 
             tong+=n; 
             i=j; 
            } 
           else i++; 
	}
	printf("%d",tong);
}
