#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	string a, b, c, s; 
	std::cin >> a >> b >> c;

	s = a + b;
	sort(s.begin(), s.end());
	sort(c.begin(), c.end());

	if (s == c)

		std::cout << "YES";

	else 
		std::cout << "NO";

}
