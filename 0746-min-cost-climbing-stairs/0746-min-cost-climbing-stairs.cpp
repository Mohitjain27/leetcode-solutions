class Solution {
public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n = cost.size();

//         vector<int> ans(n);

//         ans[0] = cost[0];
//         ans[1] = cost[1];

//         for( int i = 2 ; i < n ; i++){
//             ans[i] = cost[i] + min(ans[i-1] , ans[i-2]);

//         }
//         return min( ans[n-1] , ans[n-2]);
//     }
// };
 int minCostClimbingStairs(vector<int>& cost) {

        int n = cost.size();

        vector<int> ans(n + 1);

        ans[0] = 0;
        ans[1] = 0;

        for (int i = 2; i <= n; i++) {

            int case1 = cost[i-1] + ans[i-1];
            int case2 = cost[i-2] + ans[i-2];

            ans[i] = min(case1, case2);
        }

        return ans[n];
    }
};