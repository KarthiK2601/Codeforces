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
		int x ,n = 0; std::cin >> n; 
		int arr[60] = {};

		
		for (int i = 0; i < n; i++) {
			std::cin >> x; 
			arr[i] = x;
		}

		sort(arr, arr + n);

		int diff, minDiff = arr[1] - arr[0] ;

		for (int i = 1; i < n; i++) {
			diff = abs(arr[i] - arr[i - 1]);
			minDiff = min(diff, minDiff);
		}

		std::cout << minDiff << "\n";

	}


}
