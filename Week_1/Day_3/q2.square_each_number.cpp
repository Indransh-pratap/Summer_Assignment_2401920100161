#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> Squaree(vector<int>& nums) {
        int n = nums.size();

        int left = 0;
        int right = n - 1;
        int idx = n - 1;

        vector<int> ans(n);

        while (left <= right) {
            int l = nums[left] * nums[left];
            int r = nums[right] * nums[right];

            if (l > r) {
                ans[idx] = l;
                left++;
            } else {
                ans[idx] = r;
                right--;
            }

            idx--;
        }

        return ans;
    }
};

int main() {
    vector<int> nums = {-4, -1, 0, 3, 10};

    Solution obj;

    vector<int> ans = obj.Squaree(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    return 0;
}