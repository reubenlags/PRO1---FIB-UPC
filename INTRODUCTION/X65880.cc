#include <bits/stdc++.h>
using namespace std;

int main(){
    //Casting is an operation that allows us to change the type of a variable
    char c;
    cin >> c ;
    if (c <= '9' and c >= '0') cout << "Number" << endl;
    else if (c <= 'z' and c >= 'a') cout << "Lowercase letter" << endl;
    else if (c <= 'Z' and c >= 'A') cout << "Uppercase letter" << endl;


    
}