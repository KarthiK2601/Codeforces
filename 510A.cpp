#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

void drawHash(const int& m) {
	for (int i = 1; i <= m; i++) {
		std::cout << "#";
	}
	std::cout << "\n";
}

void drawDotHash(const int& m) {
	for (int i = 1; i < m; i++) {
		std::cout << ".";
	}
	std::cout << "#";
	std::cout << "\n";
}

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m; std::cin >> n >> m; 

	

}
