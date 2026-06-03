#include <iostream>
#include <vector>

using namespace std;

int max_subarray_sum(vector<int> &arr)
{

    // we'll use kadans algorith for -ve numbers sliding window dosent work for -ve numbers

    int currsum = arr[0];
    int maxsum = arr[0];
    int n = arr.size();

    for (int i = 1; i < n; i++)
    {

        currsum = max(arr[i], currsum + arr[i]);
        maxsum = max(currsum, maxsum);

        return maxsum;
    }
}

int main()
{
    vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << max_subarray_sum(arr);
}