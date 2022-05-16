#include <iostream>
#include <vector>

using namespace std;

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << " " << root->val;
    return;
}

int main()
{

    return 0;
}

bool isValidSerialization(string preorder)
{
    vector<string> arr;

    for (int i = 0, j = 0; i < preorder.size(); i = j + 1)
    {
        while (j < preorder.size() && preorder[j] != ',')
            j++;
        string curStr = substr(i, j - i);
        cout << curStr << endl;
    }
}