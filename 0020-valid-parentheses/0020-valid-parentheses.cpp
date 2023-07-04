class Solution {
public:
    char opp(char ch)
    {
        switch (ch){
            case ')':
                return '(';
            case '}':
                return '{';
            case ']':
                return '[';
            default:
                return 'x';
        }
    }
    bool isValid(string s) {
        stack<char> st;
        for(char el : s)
        {
            if(el == '(' || el == '{' || el == '[')
                st.push(el);
            else
            {
                if(!st.empty() && st.top() == opp(el))
                    st.pop();
                else
                    return false;
            }
        }
        return st.empty();

        
    }
};