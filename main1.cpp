// Trần Nguyễn Khánh Duy
// 26120087
#include <bits/stdc++.h>
using namespace std;

#define f for(int i = 0; i < n; i++)

int main(){
    string name;
    int birth_year;

    cout << "Name = ";
    getline(cin, name);
    cout << "Birth-year = ";
    cin >> birth_year;

    cout << "Hello " << name << ", now you are " << 2026 - birth_year << " years old.";

    return 0;

}