#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        left = right = NULL;
    }
};

class Pair{ // data: size, sum
public:
    int size;
    int sum;
};

class Penta{ 
public:
    int size;
    int sum;
    int mx;
    int mn;
    int level;
};

Penta sizeSumMaxMinLevel(Node* root){
    if(root == NULL) return {0,0,INT_MIN,INT_MAX,0};
    Penta left = sizeSumMaxMinLevel(root->left);
    Penta right = sizeSumMaxMinLevel(root->right);
    int size = 1 + left.size + right.size;
    int sum = root->val + left.sum + right.sum;
    int mx = max(root->val,max(left.mx,right.mx));
    int mn = min(root->val,min(left.mn,right.mn));
    int level = 1 + max(left.level,right.level);
    return {size,sum,mx,mn,level};
}

Pair sizeSum(Node* root){
    if(root == NULL) return {0,0};
    Pair left = sizeSum(root->left);
    Pair right = sizeSum(root->right);
    int size = 1 + left.size + right.size;
    int sum = root->val + left.sum + right.sum;
    return {size,sum};
}

int size(Node* root){
    if(root == NULL) return 0;
    int leftSize = size(root->left);
    int rightSize = size(root->right);
    return 1 + leftSize + rightSize;
}

int sum(Node* root){
    if(root == NULL) return 0;
    return root->val + sum(root->left) + sum(root->right);
}

pair<int,int> maxMin(Node* root){
    if(root == NULL) return {INT_MIN,INT_MAX};
    pair<int,int> left = maxMin(root->left);
    pair<int,int> right = maxMin(root->right);
    int mx = max(root->val,max(left.first,right.first));
    int mn = min(root->val,min(left.second,right.second));
    return {mx,mn};
}

int main(){
    Node* a = new Node(1); // root
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(8);
    Node* h = new Node(9);

    a->left = b; a->right = c;
    b->left = d; b->right = e;
    c->right = f;
    e->left = g; e->right = h;

    cout<<size(a)<<endl;
    cout<<sum(a)<<endl;
}
