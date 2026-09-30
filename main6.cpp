// Trần Nguyễn Khánh Duy
// 26120087
#include <bits/stdc++.h>
using namespace std;

int main(){

    int money;
    
    cout << "Exchange money = ";
    cin >> money;
    
    cout << "Note 20000: " << money / 20000 << endl;
    money -= money/20000 * 20000;
    cout << "Note 10000: " << money / 10000 << endl;
    money -= money/10000 * 10000;
    cout << "Note 5000: " << money / 5000 << endl;
    money -= money/5000 * 5000;
    cout << "Note 1000: " << money / 1000 << endl;
    money -= money/1000 * 1000;
    cout << "Remain money = " << money;
}