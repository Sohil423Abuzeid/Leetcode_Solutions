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
public class Solution
{
    List<int> ans;
    void build(TreeNode t)
    {
        if(t== null) return;
        build(t.left);
        ans.Add(t.val);
        build(t.right);
        
    }
    public IList<int> InorderTraversal(TreeNode root)
    {
        ans = new List<int> ();
        build(root);
        return ans;
    }
}