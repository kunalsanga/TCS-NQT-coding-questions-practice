#include<bits/stdc++.h>
using namespace std;
struct  Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};
int mindepth(Node* root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 1;
    }
    if(root->left==NULL){
        return 1 + mindepth(root->right);
    }
    if(root->right==NULL){
        return 1 + mindepth(root->left);
    }
    return 1 + min(
        mindepth(root->left),
        mindepth(root->right)
    );
}
int main(){
    Node* root = new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    cout<<mindepth(root);
    return 0;
}