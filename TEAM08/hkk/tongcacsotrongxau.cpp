//Hùynh kim Khánh
///MSV:21t1020451
#include"stdio.h"
#include"string.h"
void test(char s[]){
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
int main(){
char x[500];
fflush(stdin);
fgets(x, 500, stdin);
test(x);
}
