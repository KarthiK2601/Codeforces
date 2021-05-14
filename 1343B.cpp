#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include <set>
#include<map>

using namespace std;


int main(){

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; std::cin >> t; 

	while (t--) {
		int n; std::cin >> n;
		int sum1 = 0; int sum2 = 0;
		int num1 = 2, num2 = 1; 

		if ((n % 2) != 0 || (n / 2 % 2) != 0) {
			std::cout << "NO" << "\n";
			continue;
		}

		 
		else {
			std::cout << "YES" << "\n";
			for (int i = 1; i <= n / 2; i++) {
				std::cout << num1  << " ";
				sum1 += num1;
				num1 += 2;
				
			}

			for (int i = 1; i <= n / 2 -1 ; i++) {
				std::cout << num2 << " ";
				sum2 += num2;
				num2 += 2;
				
			}

			std::cout << sum1 - sum2 << "\n"; 
		}
	}

}
