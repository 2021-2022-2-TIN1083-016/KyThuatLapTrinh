#include <stdio.h>
#include "..\..\_src\Log.h"
#include "..\..\_src\Utils.h"

int main(){
    LOG_D("\n****************\n");
    char Bai[] = "ma hoa van ban";
    char Ten[] = "NGUYEN DUC NHUAN"; 
    char MSV[] = "21T1020145";
using namespace std;

int main() {
	string s;
    cin >> s;
    int k;
    cin >> k;
    reverse(s.begin(),s.begin() + k);
    reverse(s.begin()+k,s.end());
    // reverse(s.begin(),s.end());
    cout << s << endl;

}