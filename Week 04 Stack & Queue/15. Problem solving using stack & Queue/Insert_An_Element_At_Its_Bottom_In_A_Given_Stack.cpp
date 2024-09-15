#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    stack<int> duplicate_stack;

    while (!myStack.empty())
    {
        duplicate_stack.push(myStack.top());
        myStack.pop();
    }
    duplicate_stack.push(x);

    while (!duplicate_stack.empty())
    {
        myStack.push(duplicate_stack.top());
        duplicate_stack.pop();
    }

    return myStack;
}
