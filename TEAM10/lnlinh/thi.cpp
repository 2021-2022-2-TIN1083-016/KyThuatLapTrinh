#include <string>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <iostream>
 using namespace std;

string mahoaxau(string str, int n) {
	string Se = str.substr(n);
	string Sb = str.substr(0, n);
	reverse(Se.begin(), Se.end());
	reverse(Sb.begin(), Sb.end());	
	Sb+=Se;
	return Sb;

}
int main() {
    string a;
    cin >> a;
    int n;
    scanf("%d",&n);
	string substr = mahoaxau(a, n);
 	cout << substr << endl;
    return 0;
}
