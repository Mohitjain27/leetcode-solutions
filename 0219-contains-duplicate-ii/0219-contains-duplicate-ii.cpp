class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> t;

        for (int i = 0; i < nums.size(); i++) {
            if (t.find(nums[i]) != t.end()) {
                if (i - t[nums[i]] <= k) {
                    return true;
                }
            }

            t[nums[i]] = i; // update latest index
        }

        return false;
    }
};