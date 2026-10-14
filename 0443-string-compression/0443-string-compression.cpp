
class Solution {
public:
    int compress(vector<char>& chars) {
        string s = "";
        int i = 0;
        int j = 0;

        while (i < chars.size()) {
            int count = 0;
            j = i;

            while (j < chars.size() && chars[i] == chars[j]) {
                j++;
                count++;
            }

            s += chars[i];

            if (count > 1) {
                s += to_string(count);
            }

            i = j;
        }

        chars = vector<char>(s.begin(), s.end());

        return chars.size();
    }
};
