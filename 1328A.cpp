#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; 
	std::cin >> t; 

	while (t--) {
		int a, b, rem ,  moves =0; 
		std::cin >> a >> b; 

		rem = a % b;

		if ( rem == 0) 
			std::cout << moves << "\n";
		
		else {
			moves = b - rem;
			std::cout << moves << "\n";
		}


	}
}
