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
		int a, b; std::cin >> a >> b; 
		int arr[110] = { 0 };

		for (int i = 0; i < a; i++) {
			int x = 0; std::cin >> x;
			arr[i] = x; 
		}

		if (a == 1 && b == arr[0]) {
		std:cout << "NO" << "\n";
			continue;
		}

		int sum = 0, count =0 ;
		for (int i = 0; i < a; i++) {
			sum += arr[i];

			if (arr[i] > b) {
				int temp = 0;
				temp = arr[i];
				arr[i] = arr[0];
				arr[0] = temp;
				
				std::cout << "YES" << "\n";

				for (int i = 0; i < a; i++) {
					std::cout << arr[i] << " ";
				}

				std::cout << "\n";
				break; 
			}
			
			else if (sum == b) {
				int temp = 0;
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
				
				std::cout << "YES" << "\n";

				for (int i = 0; i < a; i++) {
					std::cout << arr[i] << " ";
				}

				std::cout << "\n";
				break;

			}
			count++;

			
			

		}

		if (count == a) {
			std::cout << "YES" << "\n";

			for (int i = 0; i < a; i++) {
				std::cout << arr[i] << " ";
			}

			std::cout << "\n";

		}


		
		
		

		
	}
	

	

}
