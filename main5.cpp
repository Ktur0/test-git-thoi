// Trần Nguyễn Khánh Duy
// 26120087
#include <bits/stdc++.h>
using namespace std;

int main() {
	long double p, q, p2, dis, ans;
    cout << "Enter p, q = ";
	cin >> p >> q;

    p2 = p * p;
    dis = q * q / 4 + p2 * p2 * p2 / 27;
    ans = cbrt(-q / 2 + sqrt(dis)) + cbrt(-q / 2 - sqrt(dis));

	cout << "Solution x = " << fixed << setprecision(3) << ans;
	return 0;
}
