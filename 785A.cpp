#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; 
	std::cin >> n; 
	int sum = 0;
	string poly; 


	while (n--) {
		std::cin >> poly;

		switch (poly[0]) {
		case 'I': sum += 20; break;
		case 'C': sum += 6; break; 
		case 'T': sum += 4; break; 
		case 'D': sum += 12; break; 
		case 'O': sum += 8; break;

		}

	}

	std::cout << sum; 



}
