#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tst;
	cin>>tst;
	for(int t=0;t<tst;t++){
	    int n,x,y,a,b;
	    cin>>n;
	    cin>>x;
	    cin>>y;
	    cin>>a;
	    cin>>b;
	    float p = (float)x/(float)a; 
	    float d = (float)y/(float)b; 
	    if(p<d){
	        std::cout << "PETROL" << std::endl;
	    }
	    else if(p==d){
	        std::cout << "ANY" << std::endl;
	    }
	    else{
	        std::cout << "DIESEL" << std::endl;
	    }
	}
	return 0;
}
