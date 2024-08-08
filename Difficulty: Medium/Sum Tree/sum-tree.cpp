//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


// } Driver Code Ends
/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
    pair<int, bool> f(Node* root)
{
    // Base case: if the node is NULL, it's considered as a Sum Tree with a sum of 0.
    if (root == NULL) {
        return {0, true};
    }

    // Base case: if the node is a leaf, it's considered as a Sum Tree with the sum as the node's data.
    if (root->left == NULL && root->right == NULL) {
        return {root->data, true};
    }

    // Recursively calculate the sum of left and right subtrees.
    pair<int, bool> leftsum = f(root->left);
    pair<int, bool> rightsum = f(root->right);

    // Check if the current node satisfies the Sum Tree property.
    bool is_current_sum_tree = (leftsum.first + rightsum.first == root->data);

    // The current node is a Sum Tree only if its left and right subtrees are also Sum Trees
    // and the current node's value equals the sum of its left and right subtrees.
    bool is_sum_tree = leftsum.second && rightsum.second && is_current_sum_tree;

    // The sum of the current subtree is the sum of left, right, and the current node's data.
    int current_sum = leftsum.first + rightsum.first + root->data;

    return {current_sum, is_sum_tree};
}

public:
bool isSumTree(Node* root) {
    return f(root).second;
}
};

//{ Driver Code Starts.

int main() {

    int t;
    scanf("%d ", &t);
    while (t--) {
        string s;

        getline(cin, s);

        Node* root = buildTree(s);
        Solution ob;
        if (ob.isSumTree(root))
            cout << "true" << endl;
        else
            cout << "false" << endl;
    }
    return 1;
}
// } Driver Code Ends