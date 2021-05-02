#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; std::cin >> n;

	while (n--) {
		int k; std::cin >> k;

		if (k == 1 || k == 2)
			std::cout << 0 << " \n";
		else {
			if (k % 2 == 0)
				std::cout << (k / 2 - 1) << " \n";
			else
				std::cout << (k / 2 ) << " \n";
		}


	}

}
