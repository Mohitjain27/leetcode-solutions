class Solution {
public:
    int climbStairs(int n) {
//         if( n < 0) return 0;
//         if( n ==0) return 1;
//         if( n == 1) return 1;
//         if( n <= 2){
//             return n;
//         }
//             return climbStairs( n -1) + climbStairs( n -2);
        
//     }
// };

       if ( n <= 2) {
        return n ; }

        int a = 1;
        int b = 2;
        for ( int i = 3 ; i <= n ; i++){
            int climb = a +b;
        a = b;
            b = climb;

        }
        return b;
        }
};
