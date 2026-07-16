class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int sum = 0;

        for (int x : nums)
            sum += x;

        if (sum % 2)
            return false;

        int target = sum / 2;

        vector<bool> dp(target + 1, false);

        dp[0] = true;

        for (int num : nums) {
        for (int j = target; j >= num; j--) {

        bool notTake = dp[j];
        bool take = dp[j - num];

        dp[j] = take || notTake;
    }

            }


        return dp[target];
    }
};