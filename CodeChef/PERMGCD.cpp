#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tst;
	std::cin >> tst;
	for (int t = 0; t < tst; t++) {
	    int n;
	    std::cin >> n;
	    int x;
	    std::cin >> x;
	    if(x<n){
	        std::cout << "-1" << std::endl;
	    }
	    else if(x==n){
	        for(int i=0;i<n;i++){
	            std::cout << i+1 << " ";
	        }
	        std::cout << endl;
	    }
	    else{
	    int fe=x-n+1;
	    std::cout << fe <<" ";
	    for(int i=1;i<fe;i++){
	            std::cout << i << " ";
	    }
	    for(int i=fe;i<n;i++){
	         std::cout << i+1 << " ";
	    }
	        std::cout << endl;
	    }
	}
	return 0;
}
