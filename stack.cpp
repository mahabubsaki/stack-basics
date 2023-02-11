#include <bits/stdc++.h>
using namespace std;
int prec(char c)
{
    if (c == '+' || c == '-')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
int main()
{
    string input;
    cin >> input;
    stack<char> st;
    string ans = "";
    for (int i = 0; i < input.size(); i++)
    {
        char current = input[i];
        if (current >= 'a' && current <= 'z')
        {
            ans = ans + current;
        }
        else
        {
            while (st.size() && prec(st.top()) >= prec(current))
            {
                ans = ans + st.top();
                st.pop();
            }
            st.push(current);
        }
    }
    while (st.size())
    {
        ans += st.top();
        st.pop();
    }
    cout << ans;
    return 0;
}
// int main()
// {
//     string input;
//     cin >> input;

//     stack<char> st;
//     bool isRegular = true;
//     for (int i = 0; i < input.length(); i++)
//     {
//         char current = input[i];
//         if (current == '(' || current == '{' || current == '[')
//         {
//             st.push(current);
//         }
//         else
//         {
//             if (current == ')')
//             {
//                 if (st.top() == '(')
//                 {

//                     st.pop();
//                 }
//                 else
//                 {
//                     isRegular = false;
//                     break;
//                 }
//             }
//             else if (current == '}')
//             {
//                 if (st.top() == '{')
//                 {

//                     st.pop();
//                 }
//                 else
//                 {
//                     isRegular = false;
//                     break;
//                 }
//             }
//             else
//             {
//                 if (st.top() == '[')
//                 {

//                     st.pop();
//                 }
//                 else
//                 {
//                     isRegular = false;
//                     break;
//                 }
//             }
//         }
//     }
//     if (st.size() > 0)
//     {
//         isRegular = false;
//     }
//     if (isRegular)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }

//     return 0;
// }