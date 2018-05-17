#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NUL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }
           return root;
           }
        }
        void levelOrder(Node * root){
          //Write your code here

          // Creates a queque to save nodes
          queue<Node *> q;

          // while the node root exists
          while (root) {
            // we output this node data
            cout << root->data << ' ';

            // we check left and right child nodes
            // if it exits we push it to the queque
            if(root->left){
              q.push(root->left);
            }
            if(root->right){
              q.push(root->right);
            }

            // if the queque if empty we set node root nullptr
            if(q.empty()){
              root = nullptr;
            } else {
              // if the queque is not empty we set node root
              // to be the first element of the queque
              root = q.front();
              q.pop();
            }
          }
        }
};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
