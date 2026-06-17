class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
                  sort(strs.begin(),strs.end());
                       string  str1 = strs[0];
                             string ans = "";
                                 
                                 string str2 = strs.back();
                                   int n= min(str1.size(), str2.size());
                                   for(int i=0; i<n; i++){
                                       if(str1[i]==str2[i]) ans+=str1[i];
                                           else break;
                                           }

                                           if(ans!="") return ans;
                                                else   return "";
                                                    }
                                                    };
