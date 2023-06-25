//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> preSum;
        int maxLen = 0;
        int sum = 0;
        for (int i = 0;i<N;i++){
            sum+=A[i];
            if(sum == K){
                maxLen = max(maxLen,i+1);
            }
            else{
                int rem = sum -K;
                if(preSum.find(rem) != preSum.end()){
                    maxLen = max(maxLen,i-preSum[rem]);
                }
            }
            if(preSum.find(sum) == preSum.end()){
                preSum[sum] = i;
            }
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int A[],  int N, int K) 
    { 
        // Complete the function
        map<int,int> preSum;
        int maxLen = 0;
        int sum = 0;
        for (int i = 0;i<N;i++){
            sum+=A[i];
            if(sum == K){
                maxLen = max(maxLen,i+1);
            }
            else{
                int rem = sum -K;
                if(preSum.find(rem) != preSum.end()){
                    maxLen = max(maxLen,i-preSum[rem]);
                }
            }
            if(preSum.find(sum) == preSum.end()){
                preSum[sum] = i;
            }
        }
        return maxLen;
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends