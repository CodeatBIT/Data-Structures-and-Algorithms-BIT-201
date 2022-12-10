#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stk;

    if (stk.empty())
        printf("The stack is empty now.\n");
    else
        printf("The stack is not empty now.\n");

    // Pushing data in stack using ADT
    stk.push(25);

    // Showing the top data element of Stack
    printf("%d \n", stk.top());

    stk.push(33);
    stk.push(3);
    stk.push(333); // This element is kept last so it will go first

    // checking the size of a stack

    cout << "The stack size now is: " << stk.size() << endl;

    // getting and removing the top element along with removing
    while (!stk.empty())
    {
        int item = stk.top(); // same as peek operation
        stk.pop();            // removing the top element so we get second top as next stack element
        cout << item << "\n";
    }
    return 0;
}

// Operations to use
// Push, POP, empty, size,