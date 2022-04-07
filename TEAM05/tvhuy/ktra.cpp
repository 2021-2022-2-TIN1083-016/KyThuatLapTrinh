#include <stdio.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"


int main(){

    LOG_D("\n****************\n");

    char bai[] = "Tong So Trong Sau";
    char ten[] = "TRAN VAN HUY";
    char masv[] = "21t1020035";



    LOG_WT("bai: %s\n", bai);
    LOG_IT("ten: %s\n", ten);
    LOG_ET("msv: %s\n", masv);

    char str[500];
	int i=0,j,tong=0,n; 
	fflush(stdin);
    LOG_WT("nhap chuoi: ");
	fgets(str, sizeof(str), stdin);
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
	LOG_DT("tongso: %d",tong);
    
return 0;
}