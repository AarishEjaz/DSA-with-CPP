
#include <stack>
#include <string>
using namespace std;
class Solution
{
public:
    stack<char> st;
    bool isValid(string s)
    {
        for (int i = 0; i <= s.length() - 1; i++)
        {
            char ch = s[i];
            if (ch == '(' || ch == '[' || ch == '{')
            {
                st.push(ch);
            }
            else
            {
                if (st.empty())
                    return false; // agar check karne se phele hi empty hoga stack matlab uska pair pehle se hi present nahi hai
                if (!st.empty())
                {
                    char top = st.top();
                    if ((top == '(' && ch == ')') || (top == '[' && ch == ']') || (top == '{' && ch == '}'))
                    {
                        st.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};