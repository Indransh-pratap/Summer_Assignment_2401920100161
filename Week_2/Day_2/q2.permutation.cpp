class Solution {
public:

    bool ischeck(int freq1[], int freq2[]) {
        for(int i = 0; i < 26; i++) {
            if(freq1[i] != freq2[i])
                return false;
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {

        int n = s1.size();
        int m = s2.size();

        if(n > m) return false;

        int freq[26] = {0};

        for(int i = 0; i < n; i++) {
            freq[s1[i] - 'a']++;
        }

        for(int i = 0; i <= m - n; i++) {

            int win[26] = {0};   // reset for every window otherwise it is not relinitalize

            int winidx = 0;
            int idx = i;

            while(winidx < n && idx < m) {
                win[s2[idx] - 'a']++;
                winidx++;
                idx++;
            }

            if(ischeck(freq, win))
                return true;
        }

        return false;
    }
};