#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    int aux;
    cin >> c;
    if (c <= 'a' && c >= 'z') { // LC -> UC
        c -= 32;
        cout << c << endl;
    }
    else { // UC -> LC
        c += 32;
        cout << c << endl;
    }
}