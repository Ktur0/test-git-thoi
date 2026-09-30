// Trần Nguyễn Khánh Duy
// 26120087
#include <bits/stdc++.h>
using namespace std;

int main(){

    int number, sum = 0;

    cout << "Registration number = ";
    cin >> number;
    for (int i = 0; i < 5; i++){
        sum += number % 10;
        number = number / 10;
    }

    cout << "Lucky number = " << sum / 10;

    return 0;
}