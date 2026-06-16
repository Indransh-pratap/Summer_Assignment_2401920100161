// approach 1 - brute force, 2- using map , 3- count frq 26 ascii values

#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

class Solution
{
public:
    // using map
    // int firstUniqChar(string s) {

    //         unordered_map<char,int> mpp;

    //         for(char c : s){
    //             mpp[c]++;
    //         }

    //         for(int i = 0; i < s.size(); i++){
    //             if(mpp[s[i]] == 1){
    //                 return i;
    //             }
    //         }

    //         return -1;
    //     }

    // optimal

    int firstUniqChar(string s)
    {
        int freq[26] = {0};

        for (char ch : s)
        {
            freq[ch - 'a']++;
        }
        for (int i = 0; i < s.size(); i++)
        {
            if ((freq[s[i] - 'a']) == 1)
                return i;
        }
        return -1;
    }
};