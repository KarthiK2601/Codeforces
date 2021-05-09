#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
#include<map>
#include<stdlib.h>



using namespace std;


int main() {

	int  t; std::cin >> t; 

	while (t--) {

		int n = 0, m = 0; std::cin >> n >> m; 
		std::vector < int > vec(n * m, 0);
		int x = 0;
		for (int i = 1; i <= n * m; i++) {
			std::cin >> x; 
			vec[i] = x ;

		}

		int flag = 1;
		for (int i = 1; i <= n ; i ++){
			if (flag % 2 == 1) {
				sort(vec[i], vec[i + m - 1]);
				i += m;
				flag++; 
			}

			else {
				sort(vec[i], vec[i + m - 1], greater<>());
				i += m;
				flag++;
			}
		}
		
	
		for (int i = 1; i <= n * m; i++) {
			std::cout << vec[i] << " ";

			if (i % m == 0) {
				std::cout << "\n";

			}
		
		}
	


	}

}
