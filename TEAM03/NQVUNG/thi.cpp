#include <iostream>
#include<math.h>
#include "../../_src/Log.h"
using namespace std;
int main()
{   
    LOG_ET( "Bai : cac ky tu trong xau\n");
    LOG_WT("Ho Va Ten: Nguyen Quang Vung\n");
    LOG_IT("Ma sv: 21T1020201\n");
    LOG_DT("-----\n");
    LOG_ET( "Nhap xau: " ); 
    string a;
    getline(cin,a);
    char kt;
    int dem=0;
    for(int i='0';i<='9';i++ ){
        kt=0;
        dem=0;
        for(int j=0;j<a.length();j++){
            if(i==a[j]){
                dem++;
            }
        }
        if(dem>=1){
            kt=i;
            cout<<kt<<"    "<<dem<<"\n";
        }
    }
    for(int i='A';i<='Z';i++ ){
        kt=0;
        dem=0;
        for(int j=0;j<a.length();j++){
            if(i==a[j]){
                dem++;
            }
        }
        if(dem>=1){
            kt=i;
            cout<<kt<<"    "<<dem<<"\n";
        }
    }
    for(int i='a';i<='z';i++ ){
        kt=0;
        dem=0;
        for(int j=0;j<a.length();j++){
            if(i==a[j]){
                dem++;
            }
        }
        if(dem>=1){
            kt=i;
            cout<<kt<<"    "<<dem<<"\n";
        }
    }
    
}