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

class Codec 
{
public:
    void dfsSerialize(TreeNode* node, string& res)
    {
        if (!node)
        {
            res += "N,";
            return;
        }

        res += to_string(node -> val) + ",";
        dfsSerialize(node -> left, res);
        dfsSerialize(node -> right, res);
    }

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) 
    {
        string res;
        dfsSerialize(root, res);

        if (!res.empty())
            res.pop_back();
        
        return res;
    }
    
    TreeNode* dfsDeserialize(vector<string>& vals, int& i)
    {
        if (vals[i] == "N")
        {
            i++;
            return nullptr;
        }

        TreeNode* node = new TreeNode(stoi(vals[i]));
        i++;

        node -> left = dfsDeserialize(vals, i);
        node -> right = dfsDeserialize(vals, i);

        return node;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) 
    {
        vector<string> vals;
        string temp;

        stringstream ss(data);

        while (getline(ss, temp, ','))
            vals.push_back(temp);

        int i = 0;

        return dfsDeserialize(vals, i);
    }
};
