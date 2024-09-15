class Solution
{
public:
    bool isValid(string s)
    {

        stack<char> char_str;

        for (char c : s)
        {
            if ('(' == c || '{' == c || '[' == c)
            {
                char_str.push(c);
            }
            else
            {
                if (char_str.empty())
                {
                    return false;
                }
                else
                {
                    if (c == ')' && char_str.top() == '(')
                    {
                        char_str.pop();
                    }
                    else if (c == '}' && char_str.top() == '{')
                    {
                        char_str.pop();
                    }
                    else if (c == ']' && char_str.top() == '[')
                    {
                        char_str.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }
        if (char_str.empty())
            return true;
        else
            return false;
    }
};