#include <iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#include <set>
#include<map>

using namespace std;




int main() {

	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	std::set<int> mySet = { 1 ,2 ,2,2,2,2,3, 4, 5,6,7, 8, 9,2,34,5,65,678664,4,34,45564,345,42545346,57,65,7,46,73,657 };
	std::vector <int> vec(10, 4);
	std::vector <int> vec1;// = { 2 ,5,6,6,34,564,5,345,6,345,63,546,3,546,354,1,2345,26576576,57 };
	int arr[10] = { 1 ,2, 3 };

	for (auto x : arr) {
		std::cout << x << " ";

	}

	std::cout << " \n ";

	for (auto x : vec1) {
		std::cout << x << " "; 

	}

	std::cout << " \n ";


	for (auto x : mySet) {
		std::cout << x << " ";

	}

	std::cout << " \n ";

	std::cout << mySet.count(2);
	mySet.erase(2);
	std::cout << " \n ";
	std::cout << mySet.count(2);

	multiset<int > myset = { 1,2,3,45,6,7,7,8,8,9,8,6,1234,5,3,2,2,421,234,4,54,54,234,234,54,54,54,234, 0};
	std::cout << "\n" << myset.count(7) << " " << myset.count(234) << " " << myset.count(2456254);


	std::cout << " \n\n\n" << "**************************************" <<" \n\n\n" ;

	map<int, int >mymap;
	mymap[987] = 90;
	mymap[9000] = 56;
	mymap[9000] = 566;

	std::cout << mymap[23] << " " << mymap[56] << " " << mymap[90]; 
	std::cout << " \n\n\n" << "**************************************" << " \n\n\n";

	for (auto x : mymap) {
		std::cout << x.first << " "  << x.second << " ";

	}
	std::cout << " \n\n\n" << "**************************************" << " \n\n\n";
	std::cout << mymap.count(9000);
	mymap.erase(9000);
	
	std::cout << " \n\n\n" << "**************************************" << " \n\n\n";
	std::cout << mymap[9000];

	std::cout << " \n\n\n" << "**************************************" << " \n\n\n";
	mymap.count(9000);


	

	
		 
}
