#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0; 
        int n = height.size();

int r = n-1;
int maxarea = 0;
int area =0;
while(l<r){

    int width = r-l;
    int left = height[l];
int right = height[r];
area = width * min(left,right);
maxarea = max(maxarea,area);
if(left<right){

l++;
}
else r--;
}

return maxarea;
    }
};

int main(){
    vector<int>heights = {1,8,6,2,5,4,8,3,7};
     Solution obj;
cout<<obj.maxArea(heights);
}