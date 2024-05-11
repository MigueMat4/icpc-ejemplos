#include <bits/stdc++.h>
using namespace std;

int main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL);
     vector<int> a;
     for(int i=0; i<2; i++) {
	int k;
	cin >> k;
	a.push_back(k);
     }
     cout << a[0] + a[1] << "\n";
     return 0;
}
