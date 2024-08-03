#include <iostream>
#include <vector>

using namespace std;

// Define the structure of a TreeNode in the binary search tree
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

// Define a class named Solution
class Solution {
public:
    // Function to find the minimum zig-zag traversal path from a given location point P
    vector<int> minZigZagTraversal(TreeNode* root, int P) {
        vector<int> path;  // Vector to store the traversal path
        findPath(root, P, path);  // Call the helper function to find the path
        return path;  // Return the minimum zig-zag traversal path
    }

private:
    // Helper function for recursive traversal of the binary search tree
    void findPath(TreeNode* root, int target, vector<int>& path) {
        if (root == NULL)
            return;

        path.push_back(root->val);  // Add the current node's value to the path

        if (root->val == target) {
            return;  // Found the target, no need to explore further
        } else if (target < root->val) {
            findPath(root->left, target, path);  // Search in the left subtree
        } else {
            findPath(root->right, target, path);  // Search in the right subtree
        }
    }
};

// Main function for testing the solution
int main() {
    int N, P;
    cin >> N >> P;  // Input the number of points in Echo Land and the Troop's location point

    TreeNode* root = NULL;  // Initialize the binary search tree (not provided in the code)

    Solution solution;  // Create an instance of the Solution class
    vector<int> result = solution.minZigZagTraversal(root, P);  // Find the minimum zig-zag traversal path

    // Output the minimum zig-zag path
    for (int point : result) {
        cout << point << " ";
    }

    cout << "NULL" << endl;  // Print "NULL" as the terminating symbol for the path

    return 0;
}
