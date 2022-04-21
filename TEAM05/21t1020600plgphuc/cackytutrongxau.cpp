#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "../../_src/Log.h"
#include "../../_src/Utils.h"


int main()
{
    LOG_ET( "Bai : tan suat cac ky tu trong xau\n");
    LOG_WT("Ho Va Ten: Phan Le Gia Phuc\n");
    LOG_IT("Ma sv: 21t1020600\n");
    LOG_DT("-----\n");
    LOG_ET( "Nhap xau: " );

    char s[500];
    int c[123] = {0};
      gets(s);
    int n=strlen(s);
    for(int i=0;i<n;i++){
    	if(!c[s[i]]){
	    c[s[i]]=1;
	    for(int j=i+1;j<n;j++)
		if(s[j]==s[i])
		    c[s[i]]++;
	    }
	}
    for(int i=48;i<57;i++)
        if(c[i])
            printf("%c    %d\n",i,c[i]);
    for(int i=65;i<90;i++)
        if(c[i])
            printf("%c    %d\n",i,c[i]);
    for(int i=97;i<123;i++)
        if(c[i])
            printf("%c    %d\n",i,c[i]);
    return 0;
}
