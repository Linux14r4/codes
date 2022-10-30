//Code by Linuxiara
//"Dziwne cząsteczki"
//https://szkopul.edu.pl/problemset/problem/dwc/site/?key=statement
//100/100

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n, k;
    cin >> n >> k;
    vector<int> czasteczki(n);
    for(int i=0; i<n; i++) cin >> czasteczki[i];
    sort(czasteczki.begin(), czasteczki.end());

    int a=0, b=0;
    long long pref=0, wynik=0;
    while(a<=b&&b<n) {
        while(czasteczki[a]<czasteczki[b]-k) {
            pref += czasteczki[a];
            a++;
        }
        wynik += k*(long long)(b-a);
        wynik += czasteczki[b]*a-pref;
        b++;
    }
    cout << wynik << "\n";
	
	return 0;
}
