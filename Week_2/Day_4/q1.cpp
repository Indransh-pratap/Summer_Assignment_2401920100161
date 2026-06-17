
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();

        for (int lengh = 1; lengh <= n / 2; len++) {
            if (n % len != 0) continue;

            string pattern = s.substr(0, len);
            string formed = "";

            int times = n / lengh;

            for (int i = 0; i < times; i++) {
                formed += pattern;
            }

            if (formed == s) {
                return true;
            }
        }

        return false;
    }
};