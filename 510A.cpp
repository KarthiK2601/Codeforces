
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

void drawDotHash(const int& n) {
	for (int i = 1; i < n; i++) {
		std::cout << ".";
	}
	std::cout << "#";
	std::cout << "\n";
}

void drawHashDot(const int& p) {
	std::cout << "#";
	for (int i = 1; i < p; i++) {
		std::cout << ".";
	}
	
	std::cout << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n, m; std::cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1) {
			drawHash(m);
			continue;
		}
		if (i % 4 == 0)
			drawHashDot(m);
		else
			drawDotHash(m);
	}

}
