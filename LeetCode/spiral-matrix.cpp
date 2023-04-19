/*
 * @lc app=leetcode id=54 lang=cpp
 *
 * [54] Spiral Matrix
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int rLast = 1;
        int cLast = -1;
        vector<int>ans;

        for(int i = 0;i<max(m,n);i++){
            if(i<rLast){
                rLast=i;
                for(int j = i;j<n-i;j++){
                    ans.push_back(matrix[rLast][j]);
                }
            }
            else{
                break;
            }

            if((n-i)-1>cLast){
                cLast= n-i-1;
                for(int j = i+1; j<m-i;j++){
                    ans.push_back(matrix[j][cLast]);
                }
            }
            else{
                break;
            }

            if((m-i-1)>rLast){
                rLast = m-i-1;
                for(int j = n-i-2;j>(i-1);j--){
                    ans.push_back(matrix[rLast][j]);
                }
            }
            else{
                break;
            }

            if(i<cLast){
                cLast=i;
                for(int j = m-i-2;j>i;j--){
                    ans.push_back(matrix[j][cLast]);
                }
            }
            else{
                break;
            }

        }
        return ans;


    }
};
// @lc code=end

