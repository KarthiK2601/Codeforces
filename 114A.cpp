#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;




int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int s, v1, v2 , t1, t2; std::cin >> s >> v1 >> v2 >> t1 >> t2;

	if ((s * v1 + 2 * t1) < (s * v2 + 2 * t2))
		std::cout << "First";
	else if ((s * v1 + 2 * t1) > (s * v2 + 2 * t2))
		std::cout << "Second";
	else
		std::cout << "Friendship";

	

	
	

}
