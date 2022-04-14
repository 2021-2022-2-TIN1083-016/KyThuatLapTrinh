#include<stdio.h>
#include<string.h>

int main(){
	char str[500];
	int i=0,j,tong=0,n; 
	fflush(stdin);
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
	printf("%d",tong);
}
