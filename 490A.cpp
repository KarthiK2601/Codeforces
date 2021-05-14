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
	const int N = n;
	std::vector < int > vec; 

	while (n--) {
		std::cin >> x; 
		vec.push_back(x);
	}

	//sort(vec.begin(), vec.end());

	int num1 = 0, num2 = 0, num3 = 0;
	std::vector<int> pos1;
	std::vector<int> pos2;
	std::vector<int> pos3; 

	for (int i = 0; i < vec.size(); i++) {
		if (vec[i] == 1) {
			num1++;
			pos1.push_back(i+1);
		}
		if (vec[i] == 2){
			num2++;
			pos2.push_back(i+1);
		}
		if (vec[i] == 3) {
			num3++;
			pos3.push_back(i+1);
		}
	}

	int arr[] = { num1, num2 , num3 };
	sort(arr, arr + 3);

	if (num1 == 0 || num2 == 0 || num3 == 0) {
		std::cout << 0; 
		return 0; 
	}

	else {
		std::cout << arr[0] << "\n";
		for (int i = 0; i < arr[0]; i++) {
			std::cout << pos1[i] << " " << pos2[i] << " " << pos3[i] << "\n";
		}

	}

	


}
