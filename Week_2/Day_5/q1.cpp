class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mpp1;

int n = strs.size();
for(auto s:strs){
    string originalstring = s;
sort(s.begin(), s.end());
mpp1[s].push_back(originalstring);
}

vector<vector<string>>anagrams;
for(auto[key,vectsofString]:mpp1){
    anagrams.push_back(vectsofString);
}

return anagrams;

    }
};