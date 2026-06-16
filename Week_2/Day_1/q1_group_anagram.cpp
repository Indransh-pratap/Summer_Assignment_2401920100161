// 3 approaches - brute force , second using two hashmaps comare therie, third using a freq array and ascii vlaues - o(1) space

#include<iostream>
#include<unordered_map>
#include<string>

using namespace std;

class soultion{

    public :
    // optimal souln

    bool Group_anagram(string s, string t){

        if(s.size()!=t.size()) return false;

      int  frq[26] = {0};
      
      for(char ch:s){
        frq[ch-'a']++; // a= 0 asciii value so  if ch = n then ch-a = 13-0 = 13 so frq[13] = 1;

      }

      for(char ch:t){
        frq[ch-'a']--;
      }

      for(int i=0; i<26; i++){
        if(frq[i]!=0) return false;
      }

      return true;
    }

};