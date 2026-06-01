//  we can use three approaches for solve two sum 
// 1. one is brute forche using two loop it'll take o(n^2);
// 1. second using two pointer it'll take extra space to copy of nums and take extra tim 
//0(logn) for sorting operation

// third one is using hashmap o(n) sopce in worst case it take extra space and linear 0(n) tc

// code

#include <iostream>
#include<vector>



    //  we can use three approaches for solve two sum 
// 1. one is brute forche using two loop it'll take o(n^2);
// 1. second using two pointer it'll take extra space to copy of nums and take extra tim 
//0(logn) for sorting operation

// third one is using hashmap o(n) sopce in worst case it take extra space and linear 0(n) tc

// code

#include <iostream>
#include<vector>
#include <algorithm>
#include <unordered_map>

using namespace std;


 //  using two pointer 
// vector<int>two_Sum(vector<int>&nums , int target){
//     int n = nums.size();
//     vector<pair<int,int>>temp;
//     for(int i=0; i<n; i++){
//         temp.push_back({nums[i],i});

//     }

//     sort(temp.begin(),temp.end());
//     int i =0; int j = n-1;
//     while(i<j) {
//         int sum = temp[i].first + temp[j].first;
//         if(sum==target) return {temp[i].second,temp[j].second};
//         else if(sum<target) i++;
//         else j--;
//     }

//     return {};

// }


// optimum using hashmap

vector<int> two_Sum(vector<int>&nums,int target){
    unordered_map<int,int>mpp;
for(int i=0; i<nums.size(); i++){
  int compliment =target - nums[i];

  if(mpp.find(compliment)!=mpp.end()) return {i,mpp[compliment]};
  mpp[nums[i]] = i;

}
return {};

}; 

int main(){
        vector<int> nums = {2,7,11,15};

        int target = 9;
vector<int> ans = two_Sum(nums, target);

for(int x : ans){
    cout << x << " ";
}
}
