#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
	// your code goes here
	int tst;
	std::cin >> tst;
	for (int t = 0; t < tst; t++) {
	    int x;
	    std::cin >> x;
	    int y;
	    std::cin >> y;
	    int d=abs(x-y)+1;
	    std::cout << d/2 << std::endl;
	}
	return 0;
}
