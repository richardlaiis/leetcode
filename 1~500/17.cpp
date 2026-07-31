// 17. Letter Combinations of a Phone Number
class Solution {
public:
    vector<string> v = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    int n;
    string dig;
    vector<string> ans;
    void dfs(int idx, string curr) {
        if (idx == n) {
            ans.push_back(curr);
            return;
        }
        for (char c:v[dig[idx] - '0']) {
            dfs(idx+1, curr+c);
        }
    }

    vector<string> letterCombinations(string digits) {
        dig = digits;
        n = digits.size();
        dfs(0, "");
        return ans;
    }
};
