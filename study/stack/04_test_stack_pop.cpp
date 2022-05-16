// stack::push/pop
#include <iostream> // std::cout
#include <stack>    // std::stack

using namespace std;

int main()
{
    stack<int> mystack;

    mystack.pop();
    mystack.pop();
    mystack.pop();
    mystack.pop();
    mystack.pop();
    mystack.pop();
    mystack.pop();
    mystack.push(12);
    cout << "===================" << endl;
    return 0;
}