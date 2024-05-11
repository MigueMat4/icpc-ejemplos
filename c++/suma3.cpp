#include <bits/stdc++.h>
using namespace std;

int main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL);
     string linea;
     getline(cin, linea);
     istringstream iss(linea);
     vector<int> a;
     int k;

     while (iss >> k) {
	a.push_back(k);
     }
     cout << a[0]+a[1] << "\n";
     return 0;
}
