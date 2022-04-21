#include <iostream>
#include <stdio.h>  
#include <string.h>
#include "../../_src/Log.h"
void tong(char s[]){
int i=0,j,sum=0,n;
while(i<=strlen(s)-1) {
    if(s[i]>='0'&& s[i]<='9'){
       j=i;n=0;            
    while(j<=strlen(s)-1 && (s[j]>='0'&& s[j]<='9')) {
        n=10*n+(int)s[j]-48;
        j++;}
         sum+=n;
         i=j;
		 } else i++;
}
printf("%d",sum);
}
int main (){
char s[500];
 LOG_WT("Bai: Tong so trong xau:\n");
 LOG_IT("Ten: Le Thanh Dat\n");
 LOG_IT("MSV: 21T1020123\n");
 LOG_DT("-------------\n");
 LOG_DT("Nhap chuoi:");  fflush(stdin); fgets(s, 500, stdin);
 LOG_WT("Tong so: ");  tong(s);
 return 0;
}
