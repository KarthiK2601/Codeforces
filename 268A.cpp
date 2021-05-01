#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	int n; 
	std::cin >> n; 
	int arr[50][3];

	int h, g, j =0 , k=1; 
	for (int i = 0; i < n; i++) {
		std::cin >> h >> g; 
		arr[i][j] = h;
		arr[i][k] = g; 
	}

	int count = 0;

	for (int i = 0; i < n; i++) {
		for (int m = 0; m < n; m++) {
			if (arr[i][j] == arr[m][k]) count++;
		}
	}

	std::cout << count; 

}
