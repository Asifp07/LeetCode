class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_map<char, int> mp;

        int i = 0;
        int j = 0;
        int len = 0;

        while (i < s.length()) {

            if (mp.find(s[i]) != mp.end()) {

                j = max(j, mp[s[i]] + 1);
            }

            mp[s[i]] = i;

            len = max(len, i - j + 1);

            i++;
        }

        return len;
    }
};