#include <bits/stdc++.h>

#include <stack>
#include <string>
bool findRedundantBrackets(string &s)
{
    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {

        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            bool flag = true;
            while (st.top() != '(')
            {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                {
                    flag = false;
                }
                st.pop();
            }

            st.pop(); // agar bad me koi redundant bracket bhi aaya to isse match ho
                      // ke output galat batayega
            if (flag == true)
            {
                return true;
            }
        }
    }
    return false;
}