#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tst;
	std::cin >> tst;
	for (int t = 0; t < tst; t++) {
	    int n;
	    std::cin >> n;
	    int a[n];
	    if(n==3){
	        a[0]=1;
	        a[1]=2;
	        a[2]=3;
	    }
	    else{
	        a[0]=n;
	        a[n-1]=n-1;
	        a[1]=n-2;
	        a[n-2]=n-3;
	        for(int i=2;i<n-2;i++){
	            a[i]=i-1;
	        }
	    }
	    for (int i = 0; i < n; i++) {
	       std::cout << a[i] << " ";
	    }
	    std::cout <<endl;
	}
	
	return 0;
}
