
#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;
	


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, k; std::cin >> n >> k; 

	int minLeft = 240 - k;
	int timeTaken = 0; 

	for (int i = 1; i <= n; i++) {
		timeTaken += i * 5; 
		if (timeTaken > minLeft) {
			std::cout << i- 1;
			break; 

		}
	}




	
	

}
