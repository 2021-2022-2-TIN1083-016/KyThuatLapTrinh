#include"stdio.h"
#include"string.h"

void kiemtra(char s[]){
	int i=0,j,tong=0,n; 
	while(i<=strlen(s)-1) {
          if(s[i]<='9' && s[i]>='0') 
           { 
            j=i; 
            n=0;            
            while(j<=strlen(s)-1 && (s[j]<='9' && s[j]>='0')) 
             { 
                n=10*n+(int)s[j]-48; 
                j++; 
             } 
             tong+=n;
             i=j; 
            } 
           else i++;
	}
	printf("%d",tong);
}

int main(){
	char s[500];
	fflush(stdin);
	fgets(s, sizeof(s), stdin);
	kiemtra(s);
}