class Solution 
{
public:
    bool isEvenOddTree(TreeNode* root) 
    {
        queue<TreeNode *>q;
        q.push(root);
        int level=0;
        while(!q.empty())
        {
            // Take the initial value of last(the integer required to check the increasing or the decreasing nature) according to the level no.
            int n=q.size(),last=(level%2==0?INT_MIN:INT_MAX);
            while(n)
            {
                TreeNode *node=q.front();
                q.pop();
                if(level%2==0)
                {
                    // If at even-indexed level the node value is even return false
                    if(node->val%2==0)
                    {
                        return false;
                    }
                    //If at even-indexed level the values are not in strictly increasing order simply return false
                    else if(node->val<=last)
                    {
                        return false;
                    }
                }
                else
                {
                    // If at odd-indexed level the node value is odd return false
                    if(node->val%2!=0)
                    {
                        return false;
                    }
                    //If at odd-indexed level the values are not in strictly decreasing order simply return false
                    else if(node->val>=last)
                    {
                        return false;
                    }
                }
                if(node->left)
                {
                    q.push(node->left);
                }
                if(node->right)
                {
                    q.push(node->right);
                }
                last=node->val;
                n--;
            }
            level++;
        }
        return true;
    }
};
