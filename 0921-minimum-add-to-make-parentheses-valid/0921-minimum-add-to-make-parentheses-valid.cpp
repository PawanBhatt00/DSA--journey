class Solution {
public:
    int minAddToMakeValid(string s) {
    
        stack<int>st;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                if(s[i]=='(')
                {
                    st.push(s[i]);
                }
                else 
                {
                    count++;
                }
            }
            else
            {
                if(s[i]==')')
                {
                    if(st.top()=='(')
                    {
                        st.pop();
                    }
                    else count++;
                }

                else st.push(s[i]);
            }
        }
        return count+st.size();
    }
};