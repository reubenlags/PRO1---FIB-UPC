#include <bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int temp = min(a,b);
    if (temp < c) cout << temp << endl;
    else cout << c << endl;

}   


//Alternative by using boolean logic
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if ((a < c) && (a < b)) cout << a << endl;
    if ((b < c) && (b < a)) cout << b << endl;
    if ((c < a) && (c < b)) cout << c << endl;

}