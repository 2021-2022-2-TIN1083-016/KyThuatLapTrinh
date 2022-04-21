#include<stdio.h>
#include<string.h>
int main(){
	char st[101];
	int i;
	printf("Nhap vao mot chuoi: ");
	fflush(stdin);
	gets(st);
	
	printf("Chuoi vua nhap la: ");
	puts(st);
	
	
	printf("Chuoi vua nhap la: ");
	for(i=0; i<strlen(st); i++)
	 printf("%c", st[i]);
	
	printf("\nChuoi in nguoc: ");
	for(i=strlen(st)-1;i>=0; i--)
	 printf("%c", st[i]);
	 
	 
	return 0;
}