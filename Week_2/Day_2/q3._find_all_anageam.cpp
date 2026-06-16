
#include <bits/stdc++.h>
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        int freq[26] = {0};

        for (char ch : p) {
            freq[ch - 'a']++;
        }

        int window = p.size();

        for (int i = 0; i + window <= s.size(); i++) {
            int winfreq[26] = {0};

            for (int j = i; j < i + window; j++) {
                winfreq[s[j] - 'a']++;
            }

            bool same = true;
            for (int k = 0; k < 26; k++) {
                if (freq[k] != winfreq[k]) {
                    same = false;
                    break;
                }
            }

            if (same)
                ans.push_back(i);
        }

        return ans;
    }
};