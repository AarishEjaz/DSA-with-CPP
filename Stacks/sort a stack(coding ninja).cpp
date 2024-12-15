#include <iostream>
#include <stack>
using namespace std;

void sortedInsert(stack<int> &st, int number)
{
    if (st.empty() || st.top() < number)
    {
        st.push(number);
    }
    else
    {
        int n = st.top();
        st.pop();
        sortedInsert(st, n);
        st.push(n);
    }
}

void sortStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return
    }
    else
    {
        int num = stack.top();
        stack.pop();
        sortStack(stack);
        sortedInsert(stack, num);
    }
}