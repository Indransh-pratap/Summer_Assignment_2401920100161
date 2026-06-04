#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    vector<int> arr = {2,3,4,5,0,8,0,9,0,8,0};

    Solution obj;
    obj.moveZeroes(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}