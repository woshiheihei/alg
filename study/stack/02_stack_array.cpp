#include <iostream>
#include <vector>

using namespace std;

class Stack
{
public:
    Stack()
    {
        data = new int[100];
        top = -1;
    }

    void push(int item)
    {
        data[++top] = item;
        return;
    }

    void pop()
    {
        if (empty())
            return;

        top -= 1;

        return;
    }

    bool empty()
    {
        return top == -1;
    }

    int size()
    {
        return top + 1;
    }

    void output()
    {
        cout << "===================" << endl;
        for (int i = top; i >= 0; i--)
        {
            cout << " " << data[i] << endl;
        }
        cout << "===================" << endl;
        return;
    }

private:
    int *data;
    int top;
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