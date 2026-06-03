#include <bits/stdc++.h>

using namespace std;

class Matrixzero
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        int n = mat.size();
        int m = mat[0].size();
        int sum = 0;
        for (int i = 0; i < n; i++)
        {

            sum += mat[i][i];
            sum += mat[i][n - 1 - i];
        }
        if (n % 2 == 1)
        {
            sum -= mat[n / 2][n / 2];
        }
        return sum;
    }
};



    int main()
    {
        vector<vector<int>> mat = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

       
    Matrixzero obj;
    cout << obj.diagonalSum(mat);

    }