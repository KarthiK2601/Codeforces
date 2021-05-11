#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;




int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int x, y, z , a, b,c; std::cin >> x >>y >> z >> a >> b >> c;
	int a2 = a - x;
	int left = a + b +c -x - y; 

	if (a >= x && a2 + b >= y && left >= z) {
		std::cout << "YES";

	}

	else
		std::cout << "NO";

	
	

}
