#include <iostream>
#include <cmath> 
using namespace std;

int main() {
	// your code goes here
    int tst;
    std::cin >> tst;
    for (int i = 0; i < tst; i++) {
        long long x;
        std::cin >> x;
        long long y;
        std::cin >> y;
        long long l1=x/2;
        long long r1=x-(x/2);
        long long l2=(int)sqrt(y);
        while(y%l2!=0){
            l2--;
        }
        long long r2=y/l2;
        if((r1<l2) || (l1>r2)){
            std::cout << l1 << " " << r1 << std::endl;
            std::cout << l2 << " " << r2 << std::endl;
        }
        else{
            std::cout << -1 << std::endl;
        }
    }
	return 0;
}
