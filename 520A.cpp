#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, count = 0; string str;
	std::cin >> n >> str;

	transform(str.begin(), str.end(), str.begin(), ::tolower);
	std::vector <int> vec; 
	int c;
	for (int i = 0; i < n; i++) {
		c = int(str[i]);
		vec.push_back(c);

	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i < n; i++) {
		if (vec[0] != 97 || ((vec[i] - vec[i - 1]) > 1) || (vec[n-1] != 122)) {
			std::cout << "NO";
			return 0;
		}
	}

	std::cout << "YES";
	
}
