// 3 methods - using hashmap
// using sorting and findduplicate but takd o(nlogn)
// suing set - takes o(n) and o(n) space

#include <bits/stdc++.h>
using namespace std;

bool contain_duplicate(vector<int> &arr)
{
    unordered_set<int> st;
    for (int x : arr)
    {
        if (st.count(x))
            return true;

        st.insert(x);
    }

    return false;
}

int main(){
    vector<int>arr = {2,3,4,5,5,6,7};
    bool ans = contain_duplicate(arr);
    cout<< boolalpha<<ans;
}
