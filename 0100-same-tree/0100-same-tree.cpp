/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
//     bool isSameTree(TreeNode* p, TreeNode* q) {
//         if( p == NULL || q == NULL){
//             return p == q;
//         }

//         bool isleftsame = isSameTree( p -> left , q -> left);
//        bool isrightsame = isSameTree( p -> right , q -> right);

//         return isleftsame && isrightsame && p -> val == q -> val; 
//     }
// };
  bool helper(TreeNode* root1, TreeNode* root2){
        if( root1 == NULL && root2 == NULL){
            return true;
        }

        if(root1 == NULL || root2 == NULL){
            return false;
        }
        if( root1 -> val == root2 -> val){
            
        bool ans1 = helper(root1 -> left , root2 -> left);
        bool ans2 = helper(root1 -> right , root2 -> right);
        return ans1 && ans2;
        }
        return false;

    }
    bool isSameTree(TreeNode* p, TreeNode* q){
        return helper(p,q);
    }
};