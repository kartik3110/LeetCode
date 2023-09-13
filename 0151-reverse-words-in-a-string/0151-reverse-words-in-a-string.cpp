class Solution {
public:
    string reverseWords(string s)
    {
        int i = 0;
        string ans = "";
        string temp = "";
        while(i < s.length())
        {
            char c = s[i];
            if(c != ' ')
            {
                temp+= c;
            }
            else if(c == ' ')
            {
                if(temp != "")
                {
                    //add in reverse manner only
                    ans = temp +' '+ ans;
                    temp = "";
                }
            }
            i++;
        }
        if(temp != "") ans = temp +' '+ans;
        return ans.substr(0, ans.length()-1);

    }

};






    // O(N) time and space
    // string reverseWords(string s) {
    //     stack<string> st;
    //     for(int i = 0; i < s.length(); i++)
    //     {
    //         if(s[i] == ' ') continue;
    //         string word = "";
    //         while(s[i] != ' ' && i < s.length())
    //         {
    //             word += s[i];
    //             i++;
    //         }
    //         st.push(word);
    //     }
    //     string ans = "";
    //     while(!st.empty())
    //     {
    //         ans += st.top();
    //         ans += ' ';
    //         st.pop();
    //     }
    //     return ans.substr(0, ans.length()-1);
    // }