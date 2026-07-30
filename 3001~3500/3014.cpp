// 3014. minimum-number-of-pushes-to-type-word-i
class Solution {
public:
    int minimumPushes(string word) {
        int n = word.size();
        int touch = 1, ans = 0;
        while (n) {
            if (n >= 8) {
                n -= 8;
                ans += (touch << 3);
            } else {
                ans += touch * n;
                break;
            }
            touch++;
        }
        return ans;
    }
};
