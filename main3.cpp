// Trần Nguyễn Khánh Duy
// 26120087
#include <bits/stdc++.h>
using namespace std;

int main(){

    float c;
    cout << "Celcius = ";
    cin >> c;

    cout << "Fahrenheit = "<< fixed << setprecision(1) << c*1.8 + 32 << endl;
    cout << "Kelvin = "<< fixed << setprecision(1) << c + 273;

    return 0;
}