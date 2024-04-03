/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int val=0, TreeNode left=null, TreeNode right=null) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    void bu(TreeNode a)
    {
        if(a==null)return ;
        (a.right,a.left)=(a.left,a.right);
        bu(a.right);
        bu(a.left);
    }
    public TreeNode InvertTree(TreeNode root) {
        bu(root);
        return root;
    }
}