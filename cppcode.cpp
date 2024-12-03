
template <typename T>
class AVLTree: public BinaryTree<T> {
private:
    TreeNode<T>* root; // корень

    // Метод удаления узла (и всех его потомков) по указателю
    void destroyHelper(TreeNode<T>* &node) {
        if (node == nullptr) return;

        this->destroyHelper(node->left);
        this->destroyHelper(node->right);

        delete node;
        node = nullptr;
    }
public:
	AVLTree() {}
	~AVLTree() {}
}