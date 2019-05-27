/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    void levelOrder(Node * root) {
        queue<Node *>q;
        q.push(root);
        while(!q.empty())
        {
            Node * tmp;
            tmp = q.front();
            q.pop();
            cout<<tmp->data<<" ";
            if(tmp->left !=NULL)
                q.push(tmp->left);
            if (tmp->right != NULL)
              q.push(tmp->right);
        }
    }