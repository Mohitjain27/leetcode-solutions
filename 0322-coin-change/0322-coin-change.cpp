class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {

        vector<int> ans(amount + 1, INT_MAX);

        ans[0] = 0;

        for (int currAmount = 1; currAmount <= amount; currAmount++) {

            for (int coin : coins) {

                if (currAmount - coin >= 0 && ans[currAmount - coin] != INT_MAX) {

                    ans[currAmount] = min(ans[currAmount],
                                       1 + ans[currAmount - coin]);
                }
            }
        }

        if (ans[amount] == INT_MAX)
            return -1;

        return ans[amount];
    }
};