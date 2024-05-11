#include <bits/stdc++.h>
using namespace std;

int main()
{
     std::ios::sync_with_stdio(false);cin.tie(NULL);
     string linea;
     getline(cin, linea);
     istringstream iss(linea);
     int k, suma=0;

     while (iss >> k) {
	suma += k;
     }
     cout << suma << "\n";
     return 0;
}
