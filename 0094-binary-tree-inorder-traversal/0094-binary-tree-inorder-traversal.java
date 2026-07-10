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
 import java.util.List;
 import java.util.Stack;

class Solution {
    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> finalresult= new ArrayList<>();
        Stack<TreeNode> tree= new Stack<>();
        TreeNode currentnode= root;

        while (currentnode!=null || !tree.isEmpty()){
            
            while(currentnode!=null){
                tree.push(currentnode);
                currentnode=currentnode.left;
            }

            currentnode=tree.pop();
            finalresult.add(currentnode.val);

            currentnode=currentnode.right;
        }
        return finalresult;
    }
}