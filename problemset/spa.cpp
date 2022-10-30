//Code by Linuxiara
//"Spacery po drzewie binarnym"
//https://szkopul.edu.pl/problemset/problem/OBf723EhSg5KedPQJDBJNHjX/site/?key=statement
//100/100

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int q;
	cin >> q;	
	for(int i=0; i<q; i++) {
		long long a, b;
		cin >> a >> b;
		int wynik = 0;
		while(a!=b) {
			if(a>b) a /= 2;
			else b /= 2;
			wynik++;
		}
		cout << wynik << "\n";
	}
	
	return 0;
}
