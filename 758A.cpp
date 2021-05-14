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

	int n, x; std::cin >> n; 
	int arr[101];

	for (int i = 0; i < n; i++) {
		std::cin >> x; 
		arr[i] = x; 
	}
	
	sort(arr, arr + n);
	
	int sum = 0; 
	
	for (int i = 0; i < n - 1; i++) {
		sum += arr[n - 1] - arr[i];
	}

	std::cout << sum; 

}
