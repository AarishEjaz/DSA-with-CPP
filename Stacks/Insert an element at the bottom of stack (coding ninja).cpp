#include <bits/stdc++.h>
#include <stack>
using namespace std;
stack<int> pushAtBottom(stack<int> &myStack, int x)
{
    if (myStack.empty())
    {
        myStack.push(x);
    }
    else
    {
        int num = myStack.top();
        myStack.pop();
        pushAtBottom(myStack, x);
        myStack.push(num);
    }

    return myStack;
}
