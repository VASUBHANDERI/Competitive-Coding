class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        bool visited[101];
        for(int j=0;j<101;j++){
            visited[j]=false;
        }
        int A[n];
        int i=0;
        for(auto it:nums){
            A[i]=it;
            i++;
        }
        for(int j=0;j<n;j++){
            
            if(A[j]!=0 && visited[A[j]]==false){
                ans++;
                visited[A[j]]=true;
            }
            
        }
        return ans;
    }
};