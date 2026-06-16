class Solution {
public:
    int compress(vector<char>& chars) {
        int write = 0;
        int i = 0;

        while (i < chars.size()) {
            char curr = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == curr) {
                count++;
                i++;
            }

            chars[write++] = curr;

            if (count > 1) {
                string freq = to_string(count);

                for (char ch : freq) {
                    chars[write++] = ch;
                }
            }
        }

        return write;
    }
};