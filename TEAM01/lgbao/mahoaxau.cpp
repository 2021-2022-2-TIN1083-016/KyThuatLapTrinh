#include <bits/stdc++.h>
#include "../../_src/Log.h"
using namespace std;

int main(){
  LOG_WT("Bai: Ma hoa van ban:\n");
  LOG_IT("Ten: Le Gia Bao\n");
  LOG_IT("MSV: 21T1020009\n");
  LOG_DT("Xau  Q:");
  string q;
  getline(cin, q);
  int k;
  LOG_DT("Khoa k:");
	cin >> k;
	LOG_DT("Xau  S:");
  for (int i = k - 1; i >= 0 ;i--)
	{
		LOG_E("");
    cout << q[i];
	}
	for (int i = q.length() - 1;i >= k; i--)
	{
		LOG_E("");
    cout << q[i];
	}	
}