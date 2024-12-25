class Tree;
class TreeNode
{
    friend class Tree;

private:
    TreeNode *LeftChild;
    char data;
    TreeNode *RightChild;
};

class Tree
{
    // public:
private:
    TreeNode *root;
};

int main()
{
    return 0;
}