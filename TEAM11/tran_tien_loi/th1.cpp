#include"stdio.h"
#include"string.h"
#include"..\..\_src\Log.h"
#include"..\..\_src\Utils.h"
void string(char str[]){
	int i=0,j,sum=0,n; 
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
             sum+=n;
             i=j; 
            }else{
			 i++; 
		}
	}
	printf("%d",sum);
}

int main(){
	char str[501];
	fflush(stdin);
	fgets(str, sizeof(str), stdin);
	string(str);
}
