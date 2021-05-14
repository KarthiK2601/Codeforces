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

	int arr[10];
	int x; 

	for (int i = 0; i < 3; i++) {
		std::cin >> x; 
		arr[i] = x; 
	}

	sort(arr, arr + 3);

	int sum = arr[1] - arr[0] + arr[2] - arr[1];

	std::cout << sum; 

	

}
