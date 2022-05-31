#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void transform(string s, stack<char> &ss)
{
    for (int i = 0; i < s.size(); i++)
    {
        char tmp = s[i];
        if (!ss.empty() && tmp == '#')
        {
            ss.pop();
        }
        else if (tmp != '#')
        {
            ss.push(tmp);
        }
    }
    return;
}

bool backspaceCompare(string s, string t)
{
    stack<char> s1, s2;

    transform(s, s1);
    transform(t, s2);

    if (s1.size() != s2.size())
        return false;

    while (!s1.empty())
    {
        if (s1.top() != s2.top())
            return false;
        s1.pop();
        s2.pop();
    }

    return true;
}

int main()
{
    bool res = backspaceCompare("a##c", "#a#c");
    cout << "res" << res << endl;
    return 0;
}