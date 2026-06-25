#include <iostream>
#include <vector>
using namespace std;

int n = 3, m = 3; 

void fxn(int i, int j, string s){

    if(i >= n || j >= m){
        return;
    }

    if(i == n-1 && j == m-1){
        cout << s << endl;
        return;
    }

    s += "D";
    fxn(i+1, j, s);
    s.pop_back();

    s += "R";
    fxn(i, j+1, s);
    s.pop_back();
}

//using dp

class Solution {
public:

    int fxn(int i, int j, int m, int n, vector<vector<int>>& dp){

        if(i >= m || j >= n){
            return 0;
        }

        if(i == m-1 && j == n-1){
            return 1;
        }

        if(dp[i][j] != -1){
            return dp[i][j];
        }

        int down = fxn(i+1, j, m, n, dp);
        int right = fxn(i, j+1, m, n, dp);

        return dp[i][j] = down + right;
    }

    int uniquePaths(int m, int n) {

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return fxn(0, 0, m, n, dp);
    }
};