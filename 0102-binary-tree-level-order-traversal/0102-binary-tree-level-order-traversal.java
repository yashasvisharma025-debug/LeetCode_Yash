/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
 import java.util.ArrayList;
 import java.util.LinkedList;
 import java.util.List;
 import java.util.Queue;

class Solution {
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> finallist = new ArrayList<>();

        if (root==null){
            return finallist;
        }

        Queue<TreeNode> tree= new LinkedList<>();
        tree.add(root);

        while(!tree.isEmpty()){
            int levelsize= tree.size();
            List<Integer> currentlevellist= new ArrayList<>();

            for (int i=0; i< levelsize; i++){
                TreeNode currentnode=tree.poll();
                currentlevellist.add(currentnode.val);

                if (currentnode.left!=null){
                    tree.add(currentnode.left);
                }
                if (currentnode.right!=null){
                    tree.add(currentnode.right);
                }
            }
            finallist.add(currentlevellist);
        }
        return finallist;
    }
}