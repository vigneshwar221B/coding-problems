class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.size() == 0) {
            return {};
        }

        vector<string> combs;
        const vector<string> chars = { "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz" };

        build("", 0, digits, chars, combs);
        return combs;
    }

    void build(string builder, int i, string digits, vector<string> chars, vector<string>& combs) {
        if (i == digits.size()) {
            combs.push_back(builder);
            return;
        }

        int d = digits[i] - '0';
        for (char ch : chars[d]) {
            build(builder + ch, i + 1, digits, chars, combs);
        }
    }
};