#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

// using map sc - o(n) , using frq array- space o(1) , 26 characters so .

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int freq[26] = {0};

        for (auto ch : magazine) {
            freq[ch - 'a']++;
        }

        for (auto ch : ransomNote) {
            freq[ch - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] < 0) {
                return false;
            }
        }
        return true;
    }
};