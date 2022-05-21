#include <iostream>
#include <algorithm>
#define all(x) (x).begin(), (x).end()
using namespace std;
int main() {
    string s, s1, s2; int k;
    getline(cin, s);
    cin >> k;
    s1 = s.substr(0, k);
    s2 = s.substr(k, s.size() - k);
    reverse(all(s1)); reverse(all(s2));
    cout << s1 + s2;
    return 0; 
}