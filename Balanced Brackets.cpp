/*this is for checking if the bracket is 
valid to insert into the stack*/
bool in(char ch)
{
    if(ch=='(' || ch =='{' || ch=='[')
        return 1;
    return 0;
}
/*this is for checking if the closed bracket is
valid for the last openned bracket into the stack*/
bool valid(char left, char right)
{
    if((left=='(' && right==')') || (left=='{' && right=='}') || (left=='[' && right==']'))
    return 1;
    return  0;
}

string isBalanced(string s) {
    stack<char>st;
    int sz = s.size();
    for(int i=0; i<sz; i++)
    {
        if(in(s[i] ))
            st.push(s[i]);
        else if(!st.empty())
        {
            if(valid(st.top(),s[i]))
                st.pop();
            else
                return "NO";
        }
        else
        return  "NO";
    }
    if(!st.empty())
        return "NO";
    return "YES";
}