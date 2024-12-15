#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int> &st, int number)
{
    if (st.empty())
    {
        st.push(number);
        return;
    }
    else
    {
        int num = st.top();
        st.pop();
        insertAtBottom(st, number);
        st.push(num);
    }
}

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }
    else
    {
        int num = stack.top();
        stack.pop();
        reverseStack(stack);
        insertAtBottom(stack, num);
    }
}