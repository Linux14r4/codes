//Code by Linuxiara
//"Skład"
//https://szkopul.edu.pl/problemset/problem/sklad/site/?key=statement
//100/100

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int w, s;
    cin >> w >> s;
    vector<int> wagony(w);
    for(int i=0; i<w; i++) cin >> wagony[i];
    int a=0, b=0, suma=wagony[0], minimalna_dlugosc = w+1;
    while(a<=b&&b<w) {
        if(suma==s) {
            minimalna_dlugosc = min(minimalna_dlugosc, b-a+1);
            b++;
            suma += wagony[b];
        }
        if(suma<s) {
            b++;
            suma += wagony[b];
        }
        else if(suma>s) {
            suma -= wagony[a];
            a++;
        }
    }
    if(minimalna_dlugosc<=w) cout << minimalna_dlugosc << "\n";
    else cout << "N\n";

    return 0;
}
