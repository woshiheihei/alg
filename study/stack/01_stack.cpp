#include <iostream>
#include <vector>

using namespace std;

class Stack
{
public:
    Stack() {}

    void push(int item)
    {
        data.push_back(item);
        return;
    }

    void pop()
    {
        if (empty())
            return;

        return data.pop_back();
    }

    bool empty()
    {
        return data.size() == 0;
    }

    int size()
    {
        return data.size();
    }

    void output()
    {
        cout << "===================" << endl;
        for (int i = data.size() - 1; i >= 0; i--)
        {
            cout << " " << data[i] << endl;
        }
        cout << "===================" << endl;
        return;
    }

private:
    vector<int> data;
};

int main()
{
    Stack s;
    string op;
    int val;
    while (cin >> op)
    {
        if (op == "push")
        {
            cin >> val;
            s.push(val);
            
        }
        else if (op == "pop")
        {
            s.pop();
        }
        else if (op == "output")
        {
            s.output();
        }
    }
    return 0;
}