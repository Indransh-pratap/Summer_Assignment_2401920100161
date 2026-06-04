#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {

        int n = mat.size();
        int m = mat[0].size();

        if (n * m != r * c) return mat;

        vector<vector<int>> ans(r, vector<int>(c));

        for (int k = 0; k < n * m; k++) {

            int oldRow = k / m;
            int oldCol = k % m;

            int newRow = k / c;
            int newCol = k % c;

            ans[newRow][newCol] = mat[oldRow][oldCol];
        }

        return ans;
    }
};


