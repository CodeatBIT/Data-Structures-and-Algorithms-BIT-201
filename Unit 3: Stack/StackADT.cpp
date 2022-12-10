#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stk;
    if (stk.empty()) // using empty operation which is ADT
    {
        cout << "Stack is empty" << endl;
    }
    else
    {
        cout << "Stack is not empty" << endl;
    }
    // insert elements into stack
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    cout << "Size of the stack: " << stk.size() << endl;
    // pop and dispay elements
    while (!stk.empty())
    {
        int item = stk.top(); // same as peek operation
        stk.pop();
        cout << item << " ";
    }
    return 0;
}