#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;




int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; std::cin >> t; 

	while (t--) {
		int n,k ; std::cin >> n >> k ;

		for (int i = 1; i <= k; i++) {
			std::cout << "a";
		}

		std::cout << "c";

		if ((n - k - 1) % 3 == 0) {
			for (int i = 0; i < (n - k - 1) / 3; i++) {
				std::cout << "abc";
			}
		}
		
		if ((n - k - 1) % 3 == 1) {
			for (int i = 0; i < (n - k - 1) / 3; i++) {
				std::cout << "abc";
			}

			std::cout << "a";
		}

		if ((n - k - 1) % 3 == 2) {
			for (int i = 0; i < (n - k - 1) / 3; i++) {
				std::cout << "abc";
			}

			std::cout << "ab";
		}

		std::cout << "\n";

	}

	

}
