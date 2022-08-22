#include<bits/stdc++.h>
using namespace std;

class Node{
    
        public:
        int data;
        Node* left;
        Node *right;

        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* buildTree(){

    int data;
    cin >> data;

    Node *node = new Node(data);

    if(data == -1)
        return NULL;

    cout << endl << "Enter the value of left of " << data << ": ";
    node->left = buildTree();

    cout << endl << "Enter the value of right of " << data << ": ";
    node->right = buildTree();

    return node;
}


void traversePreOrder(Node* root){
    //Base Case
    if(!root)
        return;

    cout << root->data << "  ";
    traversePreOrder(root->left);
    traversePreOrder(root->right);
}

void traverseInOrder(Node* root){
    // Base Case
    if(!root)
        return;

    traverseInOrder(root->left);
    cout << root->data << "  ";
    traverseInOrder(root->right);
}

void traversePostOrder(Node* root){
    //Base Case
    if(!root)
        return;

    traversePostOrder(root->left);
    traversePostOrder(root->right);
    cout << root->data << "  ";
}

void traverseByLevel(Node* root){
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node* front = q.front();
        q.pop();

        if(front == NULL){
            cout << endl;
            if(!q.empty())
                q.push(NULL);
        }

        else{
            cout << front->data << "  ";
            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        }
    }
}

int findHeight(Node* root){
    if(!root or !root->left or !root->right)
        return 0;
    else
        return max(findHeight(root->left), findHeight(root->right)) + 1;
}


int main(){
    cout << endl << "Enter the data: ";
    Node *root = buildTree();


    cout << endl
         << "Preorder (NLR) Traversal: ";
    traversePreOrder(root);

    cout << endl
         << "Inorder (LNR) Traversal: ";
    traverseInOrder(root);

    cout << endl
         << "Postorder (LRN) Traversal: ";
    traversePostOrder(root);

    cout << endl
         << "Level Order Traversal: " << endl;
    traverseByLevel(root);

    cout << endl
         << "Height is: " << findHeight(root);

    return 0;
}