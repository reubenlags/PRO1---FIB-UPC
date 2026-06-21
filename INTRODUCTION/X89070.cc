#include <bits/stdc++.h>
using namespace std;

const int PI = 3.1415;

int max_value(int& a,int& b, int& c){
    int mv;
    if ((a > c) && (a > b)) mv = a;
    if ((b > c) && (b > a)) mv = b;
    if ((c > a) && (c > b)) mv = c;
    return mv;
}

int min_value(int& a,int& b,int& c){
    int mv;
    if ((a < c) && (a < b)) mv = a;
    if ((b < c) && (b < a)) mv = b;
    if ((c < a) && (c < b)) mv = c;
    return mv;
}

void sum(int& a,int& b,int& c){
    cout << max_value(a,b,c) + min_value(a,b,c) << endl;
}

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    const int sum =  max_value(a,b,c) + min_value(a,b,c) ;
    cout << sum << endl;
}