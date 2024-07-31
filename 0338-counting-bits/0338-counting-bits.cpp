class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        int count = 0;
        int i = 1;
        int num = 1;
        while (num != 0 && i <= n) {
            if ((num & 1) != 0) {
                count++;
            }
            num = num >> 1;
            if (num == 0) {
                i++;
                num = i;
                ans.push_back(count);
                count = 0;
            }
        }
        return (ans);
    }
};