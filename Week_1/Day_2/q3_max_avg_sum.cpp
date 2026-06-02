 

 // this question can be done using sliding wniow because isme k size diya h foixed size window can handle -v numbers too

 #include <bits/stdc++.h>

 using namespace std;

 double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;
        double ans = 0;
        for (int i = 0; i < k; i++) {
            windowSum += nums[i];
            ans = (double)windowSum / k;
        }

        for (int i = k; i < nums.size(); i++) {
            windowSum += nums[i];
            windowSum -= nums[i - k];

            ans = max(ans, (double)windowSum / k);
        }

        return ans;
    }

    int main(){

        vector<int>arr = {1,12,-5,-6,50,3};
        int k =3;
        double ans = findMaxAverage(arr,k);
        cout<<ans;
    }