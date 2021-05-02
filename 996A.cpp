#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int m; std::cin >> m; 
	int notes = 0; 
	int arr[] = { 100 , 50, 20 , 10, 5, 1 };

	
	for (int i = 0; i < 6; i++) {
		if (m / arr[i] >= 1) {
			notes += m / arr[i];
			m -= (m / arr[i]) * arr[i];

		}
			
	}
		
	std::cout << notes;  


}
