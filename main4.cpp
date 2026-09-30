// Trần Nguyễn Khánh Duy
// 26120087
#include <bits/stdc++.h>
using namespace std;

int main(){

    int h1, m1, s1, h2, m2, s2;
    long long t1, t2, distance;
    cout << "T1 (h m s) = ";
    cin >> h1 >> m1 >> s1;

    cout << "T2 (h m s) = ";
    cin >> h2 >> m2 >> s2;

    t1 = h1 * 3600 + m1 * 60 + s1;
    t2 = h2 * 3600 + m2 * 60 + s2;
    distance = abs(t1 - t2);

    cout << "Distance = " << distance;
    return 0;
}