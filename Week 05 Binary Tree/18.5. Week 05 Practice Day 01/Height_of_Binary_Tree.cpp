//////////////////////// PROBLEM LINK ////////////////////////
//----> https://www.codingninjas.com/studio/problems/tree-height_4609628

/************************************************************

    Following is the TreeNode class structure

    class TreeNode {
        constructor(val) {
            this.val = val;
            this.left = null;
            this.right = null;
        }
    };

************************************************************/

function heightOfBinaryTree(root)
{
    if (root == = null)
        return 0;

    const left = heightOfBinaryTree(root.left);
    const right = heightOfBinaryTree(root.right);

    return Math.max(left, right) + 1;
}

module.exports.heightOfBinaryTree = heightOfBinaryTree;
