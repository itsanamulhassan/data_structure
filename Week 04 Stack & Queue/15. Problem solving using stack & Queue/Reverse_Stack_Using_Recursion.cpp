void reverseStack(stack<int> &st)
{
    if (st.empty())
        return;

    int x = st.top();
    st.pop();

    reverseStack(st);

    stack<int> duplicate;

    while (!st.empty())
    {
        duplicate.push(st.top());
        st.pop();
    }
    duplicate.push(x);

    while (!duplicate.empty())
    {
        st.push(duplicate.top());
        duplicate.pop();
    }
}