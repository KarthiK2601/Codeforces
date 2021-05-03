
#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int func( int& a, int& b) {
	int days = 0;
	if (a >= b) {
		int days = b;
		std::cout << days << " "; 
		a -= b;
		if (a % 2 == 0)
			std::cout << a / 2;
		else
			std:: cout <<  (a - 1) / 2; 

		

	}

	else {
		int days = a;
		std::cout << days << " ";
		b -= a; 
		if (b % 2 == 0)
			std::cout << b / 2;
		else
			std::cout << (b - 1) / 2;
	}
	 
	return 0;
}


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int r, b; std::cin >> r >> b;
	
	func(r, b);
	

}
