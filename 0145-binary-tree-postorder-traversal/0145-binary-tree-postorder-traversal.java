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
 import java.util.Collections;
 import java.util.List;
 import java.util.Stack;

class Solution {
    public List<Integer> postorderTraversal(TreeNode root) {
        List<Integer> finalanswer= new ArrayList<>();
        if (root==null){
            return finalanswer;
        }
        Stack<TreeNode> tree= new Stack<>();
        tree.push(root);

        while(!tree.isEmpty()){
            TreeNode current=tree.pop();
            finalanswer.add(0, current.val);

            if(current.left!=null){
                tree.push(current.left);
            }

            if(current.right!=null){
                tree.push(current.right);
            }
        }
        return finalanswer;
    }
}