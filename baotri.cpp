#include<bits/stdc++.h>
using namespace std;
string m,c;
int main(){
    int n;
    cin >>c>>n;
    for(int z = n-1; z>=0 ;z--){
        m = m + c[z];
    }
    for(int z = c.length() - 1; z>= n;z--){
        m = m + c[z];
    }
    cout << m;
}
