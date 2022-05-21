#include <iostream>
#include <cctype>
#include <vector>

using namespace std;


int main()
{
	string a; cin >> a;
	vector<char> v;
	for(int k = 0 ; k < a.length(); k++)
	{
		if(isdigit(a[k]))
		{
			if(a[k] == '1' || a[k] == '3'|| a[k] == '5' || a[k] == '7' || a[k] == '9' || a[k] == '-1' ||a[k] == '-3'|| a[k] == '-5' || a[k] == '-7' || a[k] == '-9' )
			{
				v.push_back(a[k]);
				
			}
		}
	}
	for(int i = 0 ; i < v.size() ; i++)
	{
		cout << v[i] ;
	}
	
	return 0;
}