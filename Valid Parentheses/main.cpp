class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> stk;
        int i = 0;
        int n = s.length();
        char c {};
        char d {};
        while (i < n) {
            c = s[i];

            if (c == '{' || c == '[' || c == '(')
                stk.push(c);
            else 
            {
                if (stk.empty())
                    return false;

                d = stk.top();

                if (c == '}' && d != '{')
                    return false;

                if (c == ']' && d != '[')
                    return false;

                if (c == ')' && d != '(')
                    return false;

                stk.pop();
            }
            i++;
        }
        return stk.empty();
    }
};
