#include<iostream>
#include<string.h>
using namespace std;
int main(){
	    char dong ;
	    int hoa=0, thuong=0, so=0, n=0;
	     cout<<" nhap chuoi ki tu vao:\n";
		  do{
					
			 cin>>dong;
			 if ( 'a'<=dong && dong <='z')  thuong +=1; // neu la chu thuong thi tang len
			 if ( 'A'<=dong && dong <='Z' ) hoa+=1; // neu la chu in hoa thi tang len
			 if ( '0'<=dong && dong <='9') so+=1; // neu la chu so thi tang len
			 else  n=+1;// neu la chu khac thi tang len
						 
			  cout << " chu thuong =" << thuong << endl; 
			  cout<<" chu hoa = " << hoa << endl;
			  cout<<" chu so = " << so << endl;
			  cout<<" chu khac = " << n << endl;
			} while ( dong !=10);
						
			system ("pause");
			return 0;
		}