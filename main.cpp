#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int l, p, v;
	cin >> l >> p >> v;
	auto t = int{ 1 };
	while (!(0 == l && 0 == p && 0 == v)) {
		const auto& q = v / p;
		const auto& r = v % p;

		const auto& ans = q * l + (r < l ? r : l);
		cout << "Case " << t << ": " << ans << '\n';

		cin >> l >> p >> v;
		++t;
	}

	return 0;
}