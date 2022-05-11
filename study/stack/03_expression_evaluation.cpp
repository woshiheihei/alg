#include <iostream>
#include <vector>

using namespace std;

int calc(string op, int l, int r)
{
    int curOpVal = 0;
    int minOpVal = 1000;
    int opIndex = -1;
    int tem = 0;

    cout << "===================" << endl;
    for (int i = l; i <= r; i++)
    {
        cout << op[i];
    }
    cout << endl;
    for (int i = l; i <= r; i++)
    {
        switch (op[i])
        {
        case '+':
        case '-':
            curOpVal = tem + 1;
            if (curOpVal < minOpVal)
            {
                minOpVal = curOpVal;
                opIndex = i;
            }
            break;
        case '*':
        case '/':
            curOpVal = tem + 2;
            if (curOpVal < minOpVal)
            {
                minOpVal = curOpVal;
                opIndex = i;
            }
            break;
        case '(':
            tem += 100;
            break;
        case ')':
            tem -= 100;
            break;
        }
    }

    if (opIndex == -1)
    {
        int num = 0;
        for (int i = r; i >= l; i--)
        {
            char cur = op[i];
            if (cur == '(' || cur == ')')
            {
                continue;
            }

            num = num * 10 + cur - '0';
            cout << "i: " << i << " cur: " << cur << " num: " << num << endl;
        }
        return num;
    }

    cout << "op[opIndex]: " << op[opIndex] << endl;
    int leftVal = calc(op, l, opIndex - 1);
    int rightVal = calc(op, opIndex + 1, r);

    cout << "leftVal: " << leftVal << endl;
    cout << "rightVal: " << rightVal << endl;

    switch (op[opIndex])
    {
    case '+':
        return leftVal + rightVal;
    case '-':
        return leftVal - rightVal;
    case '*':
        return leftVal * rightVal;
    case '/':
        return leftVal / rightVal;
    }

    return 0;
}

int main()
{
    string op;
    int val;
    while (cin >> op)
    {

        int res = calc(op, 0, op.length() - 1);
        cout << "res = " << res << endl;
    }
    return 0;
}

// 1+2*3-(4*5+6)