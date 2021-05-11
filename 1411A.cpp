#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;




int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int t; std::cin >> t;

	while (t--) {
		int n; std::cin >> n; 
		string s = "";
		int count = 0; 
		std::cin >> s; 

		reverse(s.begin(), s.end()); 

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ')') {
				count++;

			}
			else
				break; 

		}

		if (count > n / 2) {
			std::cout << "YES" << "\n";
		}
		else
			std::cout << "NO" << "\n";

	}

	
	

}
